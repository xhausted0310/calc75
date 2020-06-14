#include <Windows.h>
#include "resource.h"


BOOL CALLBACK DlgProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
int CALLBACK WinMain(HINSTANCE hInstance, HINSTANCE hPrevInst, LPSTR lpCmdLine, int nCmdShow)
{
	DialogBoxParam(hInstance, MAKEINTRESOURCE(IDD_DIALOG1), 0, DlgProc, 0);
	return  0;
}

BOOL	CALLBACK DlgProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{
	case WM_INITDIALOG:
		SetFocus(GetDlgItem(hwnd, IDC_EDIT1));

		break;
	case WM_COMMAND:
	{
		HWND hEdit = GetDlgItem(hwnd, IDC_EDIT1);
		switch (LOWORD(wParam))
		{

			//////////////////////////////////OPERANDS\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

		case IDC_ZERO:
		{
			SendMessage(hEdit, WM_CHAR, IDC_ZERO - 954, 0);
		}
		break;
		case IDC_ONE:
		{
			SendMessage(hEdit, WM_CHAR, IDC_ONE - 954, 0);
		}
		break;
		case IDC_TWO:
		{
			SendMessage(hEdit, WM_CHAR, IDC_TWO - 954, 0);
		}
		break;
		case IDC_THREE:
		{
			SendMessage(hEdit, WM_CHAR, IDC_THREE - 954, 0);
		}
		break;
		case IDC_FOUR:
		{
			SendMessage(hEdit, WM_CHAR, IDC_FOUR - 955, 0);
		}
		break;
		case IDC_FIVE:
		{
			SendMessage(hEdit, WM_CHAR, IDC_FIVE - 955, 0);
		}
		break;
		case IDC_SIX:
		{
			SendMessage(hEdit, WM_CHAR, IDC_SIX - 955, 0);
		}
		break;
		case IDC_SEVEN:
		{
			SendMessage(hEdit, WM_CHAR, IDC_SEVEN - 955, 0);
		}
		break;
		case IDC_EIGHT:
		{
			SendMessage(hEdit, WM_CHAR, IDC_EIGHT - 955, 0);
		}
		break;
		case IDC_NINE:
		{
			SendMessage(hEdit, WM_CHAR, IDC_NINE - 955, 0);
		}
		break;
		//////////////////////////////////OPEREATORS\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
		case IDC_PLUS:
		{
			SendMessage(hEdit, WM_CHAR, IDC_PLUS - 970, 0);
		}
		break;
		case IDC_MINUS:
		{
			SendMessage(hEdit, WM_CHAR, IDC_MINUS - 969, 0);
		}
		break;
		case IDC_MULT:
		{
			SendMessage(hEdit, WM_CHAR, IDC_MULT - 973, 0);
		}
		break;
		case IDC_DIV:
		{
			SendMessage(hEdit, WM_CHAR, IDC_DIV - 969, 0);
		}
		break;
		case IDC_CLEAR:
		{
			SendMessage(hEdit, WM_CHAR, 0, 0);
		}
		break;


		case IDOK:
			EndDialog(hwnd, IDOK);
			break;
		case IDCANCEL:
			EndDialog(hwnd, IDCANCEL);
			break;
		}
	}
	break;
	case WM_CLOSE:
		EndDialog(hwnd, 0);
		break;
		//default:return FALSE;
	}
	return FALSE;
}

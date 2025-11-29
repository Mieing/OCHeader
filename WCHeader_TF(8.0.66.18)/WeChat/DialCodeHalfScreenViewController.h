@class MMUILabel, NSString, NSArray, WCRedesignButtonItem, MMCommonPickerView, WCSheetView;
@protocol DialCodeHalfScreenViewControllerDelegate;

@interface DialCodeHalfScreenViewController : MMPageSheetBaseViewController <MMPageSheetBottomViewDelegate, MMCommonPickerDelegate>

@property (retain, nonatomic) WCSheetView *sheetView;
@property (retain, nonatomic) MMUILabel *contentLabel;
@property (retain, nonatomic) WCRedesignButtonItem *changeLanguageButtonItem;
@property (nonatomic) BOOL isPickingLanguage;
@property (retain, nonatomic) NSString *pickLanguageCode;
@property (retain, nonatomic) NSString *pickLanguageName;
@property (retain, nonatomic) NSArray *arrLanguageCodes;
@property (retain, nonatomic) NSArray *arrLanguageNames;
@property (retain, nonatomic) MMCommonPickerView *pickerview;
@property (weak, nonatomic) id<DialCodeHalfScreenViewControllerDelegate> delegate;
@property (retain, nonatomic) NSString *languageCode;
@property (retain, nonatomic) NSString *languageName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLanguageCode:(id)a0 languageName:(id)a1;
- (void)viewDidLoad;
- (void)onTapChangeLanguageButton;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)onPickerViewDidSelectRow:(long long)a0 inComponent:(long long)a1 PickItem:(id)a2;
- (void).cxx_destruct;

@end

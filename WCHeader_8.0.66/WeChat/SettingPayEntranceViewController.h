@class NSString;

@interface SettingPayEntranceViewController : MMPageSheetBaseViewController <MMPageSheetBottomViewDelegate>

@property (copy, nonatomic) id /* block */ onValueChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isUserOpenPayEntry;

- (void)viewDidLoad;
- (void)initDetailView;
- (BOOL)isOpen;
- (id)titleForPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (id)colorForPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (void).cxx_destruct;

@end

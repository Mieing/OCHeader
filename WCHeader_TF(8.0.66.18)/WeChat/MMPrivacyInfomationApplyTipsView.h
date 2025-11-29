@class NSString, MMPrivacyInfomationApplyTipsViewConfig;

@interface MMPrivacyInfomationApplyTipsView : MMPageSheetBaseViewController <MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) MMPrivacyInfomationApplyTipsViewConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfig:(id)a0;
- (void)viewDidLoad;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void).cxx_destruct;

@end

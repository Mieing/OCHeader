@class NSString, MMUILabel, UIView;

@interface MJShootAIGCAgreementViewController : MMPageSheetBaseViewController <MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *descriptionLabel;
@property (copy, nonatomic) id /* block */ didTapAgreeButtonAction;
@property (copy, nonatomic) id /* block */ didTapCancelButtonAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)pageSheetDidClose:(BOOL)a0;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (double)bottomViewTopMargin;
- (id)titleForPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (id)colorForPageSheetCancelButtonTitle;
- (id)colorForPageSheetCancelButton;
- (void).cxx_destruct;

@end

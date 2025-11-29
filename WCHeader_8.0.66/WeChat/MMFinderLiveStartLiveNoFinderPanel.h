@class UILabel, UIButton, UIView;

@interface MMFinderLiveStartLiveNoFinderPanel : MMPageSheetBaseView

@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ createBlock;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *leaveBtn;
@property (retain, nonatomic) UIButton *createBtn;

- (id)initWithCreateBlock:(id /* block */)a0 dismissBlock:(id /* block */)a1;
- (void)setupPageSheetConfig;
- (void)showWithAnimated:(BOOL)a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)onClickedLeave;
- (void)onClickedCreate;
- (void)pageSheetDidDismiss;
- (void).cxx_destruct;

@end

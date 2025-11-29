@class UIButton;

@interface WAAuthPageSheetFooterView : WAAuthPageSheetBaseView

@property (retain, nonatomic) UIButton *acceptButton;
@property (retain, nonatomic) UIButton *rejectButton;

+ (double)viewHeightByDataModel:(id)a0 hostView:(id)a1;

- (void)setViewDataModel:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)onRejectButtonClick;
- (void)onAcceptButtonClick;
- (void).cxx_destruct;

@end

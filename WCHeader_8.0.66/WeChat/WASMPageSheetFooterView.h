@class UIButton;

@interface WASMPageSheetFooterView : WAAuthPageSheetFooterView

@property (retain, nonatomic) UIButton *declineButton;
@property (retain, nonatomic) UIButton *keepOptionButton;

+ (double)viewHeightByDataModel:(id)a0 hostView:(id)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setViewDataModel:(id)a0;
- (void)setSMUI;
- (void).cxx_destruct;

@end

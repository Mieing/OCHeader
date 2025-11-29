@class UIButton, WANickNameAndHeaderAuthViewModel;

@interface WANickNameAndHeaderAddView : WAAuthPageSheetBaseView

@property (retain, nonatomic) WANickNameAndHeaderAuthViewModel *viewDataModel;
@property (retain, nonatomic) UIButton *button;

+ (double)viewHeightByDataModel:(id)a0 hostView:(id)a1;

- (void)setViewDataModel:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end

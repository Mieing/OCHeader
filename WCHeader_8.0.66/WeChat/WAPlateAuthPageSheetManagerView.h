@class UIButton, WAPlateAuthPageSheetViewModel;

@interface WAPlateAuthPageSheetManagerView : WAAuthPageSheetBaseView

@property (retain, nonatomic) WAPlateAuthPageSheetViewModel *viewDataModel;
@property (retain, nonatomic) UIButton *button;

+ (double)viewHeightByDataModel:(id)a0 hostView:(id)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end

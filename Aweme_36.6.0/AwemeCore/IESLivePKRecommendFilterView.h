@interface IESLivePKRecommendFilterView : HTSLivePopUpView

@property (copy, nonatomic) id /* block */ selectActionBlock;

+ (id)createFilterViewWithSelectType:(int)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cellItems:(id)a1;
- (void)setupViewWithItems:(id)a0;
- (void).cxx_destruct;

@end

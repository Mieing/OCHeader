@class IESECLiveGoodsBargainModel;

@interface IESECLiveBargainMaskAnimationView : UIView

@property (retain, nonatomic) IESECLiveGoodsBargainModel *bargainModel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } panelRect;

- (void)showMaskAnimationWithHoleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 bargainingImage:(id)a1 discountBgImage:(id)a2 endBlock:(id /* block */)a3;
- (id)combinedBargainResultViewWithEndBlock:(id /* block */)a0 leftImage:(id)a1 discountBgImage:(id)a2;
- (id)initWithPanelRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)loadResourceAndShowMaskAnimationWithBargainModel:(id)a0 holeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 endBlock:(id /* block */)a2;
- (void).cxx_destruct;

@end

@class UIImageView, UIImage;

@interface IESECMallGradientBackgroundView : IESECMallBackgroundView {
    UIImage *_currentBgImage;
    double _topBarBottom;
}

@property (retain, nonatomic) UIImageView *cutBgImageView;
@property (nonatomic) double curOffsetY;

- (void)listenListCollectionScrollOffsetY:(double)a0;
- (void)setTopBarBottom:(double)a0;
- (id)currentBgImage;
- (void)setCurrentBgImage:(id)a0;
- (void)updateConstraintsAfterPadRotation:(double)a0 width:(double)a1;
- (double)topBarBottom;
- (void)updateBackgroundViewWithOffset:(double)a0;
- (void)clearCutBgImageView;
- (void)resetCutImgViewLayout;
- (id)imageByCropToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 source:(id)a1;
- (void).cxx_destruct;

@end

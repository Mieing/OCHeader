@class CAGradientLayer, CAShapeLayer, NSTimer, UILabel, UIView, BDUGLuckyTaskBackSidebarModel;

@interface BDUGLuckyTaskBackSidebarView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) BDUGLuckyTaskBackSidebarModel *model;
@property (retain, nonatomic) NSTimer *foldTimer;

- (void)__tapAction;
- (void)__pan:(id)a0;
- (void)__updateUI;
- (void)__disableFoldTimer;
- (void)__setupFoldTimer;
- (id)__createCornerRadiusLayerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)__edgeSnap;
- (void)__foldAction;
- (void)showOnVC:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (void)dealloc;

@end

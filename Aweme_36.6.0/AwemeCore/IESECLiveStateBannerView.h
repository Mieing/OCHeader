@class MASConstraint, IESECLiveStateAnimationView, UIImageView, NSString, UILabel, UIView, UITapGestureRecognizer;

@interface IESECLiveStateBannerView : UIView <IESECLiveStateAnimationProtocol>

@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) IESECLiveStateAnimationView *animationView;
@property (retain, nonatomic) UIImageView *stateIconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *rightIconImageView;
@property (retain, nonatomic) UIView *wrapper;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) MASConstraint *wrapperRightConstraint;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) BOOL animationOptimize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeRightIcon;
- (void)removeTitleLabel;
- (void)setAnimationViewData:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1 titleColor:(id)a2 titleWeight:(double)a3 backGroundcolor:(id)a4 animationView:(id)a5 animationSize:(struct CGSize { double x0; double x1; })a6 stateImageName:(id)a7 stateImageSize:(struct CGSize { double x0; double x1; })a8;
- (void)addRightIconWithModel:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1 titleColor:(id)a2 titleFontSize:(double)a3 titleWeight:(double)a4 backgroundColor:(id)a5 animationView:(id)a6 animationSize:(struct CGSize { double x0; double x1; })a7 stateImageName:(id)a8 stateImageSize:(struct CGSize { double x0; double x1; })a9;
- (void).cxx_destruct;
- (void)setTitleColor:(id)a0;
- (void)stopAnimation;
- (void)setTitle:(id)a0;
- (void)setHidden:(BOOL)a0;
- (void)setTitleFont:(id)a0;
- (void)beginAnimation;
- (void)setBgImage:(id)a0;

@end

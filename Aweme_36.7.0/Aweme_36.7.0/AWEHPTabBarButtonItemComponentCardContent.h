@class AWEHPBottomTabDoubleCardSpecialEntryModel, UIImageView, NSString;

@interface AWEHPTabBarButtonItemComponentCardContent : UIView <AWEHPTabBarButtonItemComponentContentProtocol>

@property (retain, nonatomic) AWEHPBottomTabDoubleCardSpecialEntryModel *styleModel;
@property (retain, nonatomic) UIImageView *frontImageView;
@property (retain, nonatomic) UIImageView *backImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createImageView;
- (void)switchToLightModeWithProgress:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })buttonContentRectInWindow;
- (void)performShowActionWithForbidAnimate:(BOOL)a0 completion:(id /* block */)a1;
- (void)performHideAnimationWithForbidAnimate:(BOOL)a0 completion:(id /* block */)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })frontTransform;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })backTransForm;
- (double)backImageViewAlpha;
- (BOOL)needBorder;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })imageViewSize;
- (void)setupUI;

@end

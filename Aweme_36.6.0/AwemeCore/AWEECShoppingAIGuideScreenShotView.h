@class UIImageView, IESECGCDTimer, UIView;
@protocol AWEECShoppingAIGuideScreenShotViewDelegate;

@interface AWEECShoppingAIGuideScreenShotView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *screenShotView;
@property (retain, nonatomic) UIView *feedbackView;
@property (retain, nonatomic) IESECGCDTimer *dismissTimer;
@property (retain, nonatomic) id<AWEECShoppingAIGuideScreenShotViewDelegate> delegate;

- (id)fallbackSchemaSetting;
- (void)tapFeedbackView:(id)a0;
- (void)showScreenShotWithImage:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end

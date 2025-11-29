@class UIButton;
@protocol BDEnvPlatformBottomViewDelegate;

@interface BDEnvPlatformBottomView : UIView

@property (retain, nonatomic) UIButton *button;
@property (weak, nonatomic) id<BDEnvPlatformBottomViewDelegate> delegate;

- (void).cxx_destruct;
- (id)init;
- (void)tap;

@end

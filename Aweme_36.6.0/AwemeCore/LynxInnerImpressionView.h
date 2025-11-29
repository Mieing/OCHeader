@protocol LynxInnerImpressionViewDelegate;

@interface LynxInnerImpressionView : UIView

@property (weak, nonatomic) id<LynxInnerImpressionViewDelegate> delegate;
@property (readonly, nonatomic) BOOL onScreen;
@property (nonatomic) float impressionPercent;

- (void).cxx_destruct;
- (void)impression;
- (void)exit;
- (void)didMoveToWindow;

@end

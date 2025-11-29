@protocol BDXLynxInnerImpressionViewDelegate;

@interface BDXLynxInnerImpressionView : UIView

@property (weak, nonatomic) id<BDXLynxInnerImpressionViewDelegate> delegate;
@property (readonly, nonatomic) BOOL onScreen;
@property (nonatomic) float impressionPercent;

- (void).cxx_destruct;
- (void)impression;
- (void)exit;
- (void)didMoveToWindow;

@end

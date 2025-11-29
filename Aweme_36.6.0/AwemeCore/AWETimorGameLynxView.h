@protocol AWETimorGameLynxUIDelegate;

@interface AWETimorGameLynxView : UIView

@property (weak, nonatomic) id<AWETimorGameLynxUIDelegate> delegate;

- (id)currentParentViewController;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)didMoveToSuperview;
- (void)willMoveToSuperview:(id)a0;

@end

@class LVDelayingGestureRecognizer;

@interface LVMainFeedViewController : LVFlutterViewController

@property (retain, nonatomic) LVDelayingGestureRecognizer *delayingGestureRecognizer;

+ (id)routeName;
+ (id)extraPlugins;

- (BOOL)shouldInteractiveDismiss;
- (BOOL)shouldInteractivePop;
- (BOOL)shouldSkipNavInteractiveGesture;
- (void)dealloc;
- (void)viewDidLoad;
- (void)releaseGesture;
- (void).cxx_destruct;

@end

@class NSString;

@interface BDASifLynxViewController : BDASifBaseViewController

@property (nonatomic) BOOL isLastShow;
@property (retain, nonatomic) NSString *scene;

- (void)sendShowMessage;
- (void)sendHideMessage;
- (void)removerObserver;
- (void).cxx_destruct;
- (BOOL)isVisible;
- (void)applicationDidEnterBackgroundNotification;
- (void)applicationWillEnterForeground;
- (void)addObserver;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;

@end

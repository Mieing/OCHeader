@class NSString, UIViewController, UIView;
@protocol RTVVoipResourceFetcherInterface, RxInjector;

@interface AWERTVFeedCastItemContainerViewController : UIViewController

@property (readonly, nonatomic) UIViewController *itemViewController;
@property (retain, nonatomic) UIView *navigationBar;
@property (retain, nonatomic) NSString *navigationTitle;
@property (readonly, nonatomic) id<RTVVoipResourceFetcherInterface> resourceFetcher;
@property (readonly, weak, nonatomic) id<RxInjector> injector;

+ (Class)aAWEPadRTVAdapterClass;

- (void)rxAwakeFromPropertyInjection;
- (id)aAWEPadRTVAdapter;
- (id)initWithItemViewController:(id)a0;
- (void)configNavigationTitle:(id)a0;
- (void)__handleBackEvent:(id)a0;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;

@end

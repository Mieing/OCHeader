@class AWEAwemeModel, AWENearbyWidgetViewModel, AWENearbyWidgetView;

@interface AWENearbyWidgetViewController : UIViewController

@property (retain, nonatomic) AWENearbyWidgetView *widgetView;
@property (nonatomic) unsigned long long widgetType;
@property (nonatomic) BOOL needChangeWidgetStateWithDelay;
@property (nonatomic) BOOL isFirstExpose;
@property (nonatomic) BOOL isSkylightFirstClose;
@property (retain, nonatomic) AWEAwemeModel *currentAweme;
@property (nonatomic) long long pageType;
@property (nonatomic) long long feedType;
@property (retain, nonatomic) AWENearbyWidgetViewModel *viewModel;

- (void)dismissWithAnimated:(BOOL)a0;
- (void)setupBinding;
- (void)feedTabelDidEndScroll:(id)a0;
- (void)expandWidgetIfNeededWithAnimated:(BOOL)a0 delay:(double)a1;
- (id)initWithWidgetType:(unsigned long long)a0 pageType:(long long)a1 feedType:(long long)a2;
- (void)foldWidgetIfNeededWithAnimated:(BOOL)a0 delay:(double)a1;
- (void)configWidgetWithModel:(id)a0;
- (BOOL)__jumpToUrlString:(id)a0 extraParams:(id)a1;
- (void)hideWidgetWithAnimated:(BOOL)a0;
- (void)__expandWidgetWithAnimated:(id)a0;
- (void)__foldWidgetWithAnimated:(id)a0;
- (void)didSkylightClose;
- (void)didChangePlaybackStateWithAction:(long long)a0 awemeModel:(id)a1 isSkylightOpening:(BOOL)a2;
- (void)hideWidgetWithAnimation;
- (void)showWidgetWithAnimation;
- (void).cxx_destruct;
- (id)init;
- (void)addObserver;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;

@end

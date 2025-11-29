@class ACCSessionServiceContainer;

@interface AWEPostPagePerfTrackElement : AWEPostPageElement

@property (retain, nonatomic) ACCSessionServiceContainer *sessionContainer;
@property (nonatomic) BOOL didAppearFlag;

+ (void)_aweLazyRegisterPostPage;
+ (Class)featureConfigClass:(id)a0;
+ (id)type;

- (void)contextDidReady;
- (void)firstRenderDidFinish;
- (void)trackOfDraftClickEndAndDisplay;
- (void)p_trackPublishPageFirstAppear;
- (void)_trackOfDraftClickEndAndDisplay:(double)a0;
- (void).cxx_destruct;
- (long long)priority;
- (BOOL)isVisible;
- (BOOL)isEnabled;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end

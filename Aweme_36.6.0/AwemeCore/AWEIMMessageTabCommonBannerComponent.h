@class NSString, AWEIMMessageTabCommonBannerInteractor;
@protocol AWEIMChatListHeaderInterface, AWEIMMessageTabBannerInterface;

@interface AWEIMMessageTabCommonBannerComponent : AWEIMComponentBase <AWEIMListTabWrapperAction>

@property (weak, nonatomic) id<AWEIMChatListHeaderInterface> headerService;
@property (weak, nonatomic) id<AWEIMMessageTabBannerInterface> bannerService;
@property (retain, nonatomic) AWEIMMessageTabCommonBannerInteractor *bannerInteractor;
@property (nonatomic) BOOL justHandleCacheBannerInViewDidLoad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hostVC_viewWillAppear;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)createBannerInteractor;
- (Class)interactorClass;
- (void)listViewControllerWillAppear:(long long)a0;
- (void)callViewWillAppearWhenAppropriate;
- (void).cxx_destruct;
- (void)viewWillAppear;

@end

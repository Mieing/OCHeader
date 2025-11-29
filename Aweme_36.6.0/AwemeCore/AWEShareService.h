@class NSString, AWEShareContext;
@protocol AWEShareTask;

@interface AWEShareService : HTSService <AWEShareService, AWEShareLegacy, HTSService>

@property (retain, nonatomic) AWEShareContext *legacyContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<AWEShareTask> currentTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)share_implClassOfAWEShareGroupScreenShot;
+ (Class)share_implClassOfAWEShareComment;
+ (Class)share_implClassOfAWEShareActivity;
+ (Class)share_implClassOfAWEShareChallenge;
+ (Class)share_implClassOfAWEShareLive;
+ (Class)share_implClassOfAWEShareMusic;
+ (Class)share_implClassOfAWEShareSticker;
+ (Class)share_implClassOfAWEShareSticker;
+ (Class)share_implClassOfAWEShareUser;
+ (Class)share_implClassOfAWEShareWeb;
+ (Class)share_implClassOfAWEReflowVideoInsert;
+ (Class)share_implClassOfAWEShareAnnieXContainer;
+ (Class)share_implClassOfAWEShareAweme;
+ (Class)share_implClassOfAWEShareBook;
+ (Class)share_implClassOfAWEShareSingleChapter;
+ (Class)share_implClassOfAWEShareCopyChannelUtilsProtocol;
+ (Class)share_implClassOfAWEShareDSPMusic;
+ (Class)share_implClassOfAWEShareDynamicSortManagerProtocol;
+ (Class)share_implClassOfAWEShareECommerce;
+ (Class)share_implClassOfAWEShareFactory;
+ (Class)share_implClassOfAWEShareFavoriteFolder;
+ (Class)share_implClassOfAWEShareGroup;
+ (Class)share_implClassOfAWEShareHamlet;
+ (Class)share_implClassOfAWEShareHotspot;
+ (Class)share_implClassOfAWEShareIronMan;
+ (Class)share_implClassOfAWEShareJXBiz;
+ (Class)share_implClassOfAWEShareLandscape;
+ (Class)share_implClassOfAWEShareLongVideo;
+ (Class)share_implClassOfAWEShareMixVideo;
+ (Class)share_implClassOfAWEShareMV;
+ (Class)share_implClassOfAWESharePanelDownload;
+ (Class)share_implClassOfAWESharePlaylet;
+ (Class)share_implClassOfAWESharePOIGoods;
+ (Class)share_implClassOfAWESharePOI;
+ (Class)share_implClassOfAWEShareQRCodeHelper;
+ (Class)share_implClassOfAWEShareRedPacket;
+ (Class)share_implClassOfAWEShareSearchAIGC;
+ (Class)share_implClassOfAWEShareSearchLandingPage;
+ (Class)share_implClassOfAWEShareSearch;
+ (Class)share_implClassOfAWEShareSeriesEmoji;
+ (void)initializeImplMapAndCache;
+ (Class)implClassOfProtocol:(id)a0;
+ (Class)share_implClassOfAWEShareSettings;
+ (Class)share_implClassOfAWEShareStudio;
+ (Class)share_implClassOfAWEShareTrackerService;
+ (Class)share_implClassOfAWEShareTrend;
+ (Class)share_implClassOfAWEShareUtility;
+ (Class)share_implClassOfAWEShareXPlayGame;
+ (void)initialize;
+ (id)sharedInstance;
+ (id)forwardingTargetForSelector:(SEL)a0;

- (void)onServiceInit;
- (id)typeForToken:(unsigned long long)a0;
- (void)newFetchTokenWithContext:(id)a0 autoCopy:(BOOL)a1 completion:(id /* block */)a2;
- (id)implInstanceOfProtocol:(id)a0;
- (BOOL)isLegacyGlobalContextSet;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)a0;

@end

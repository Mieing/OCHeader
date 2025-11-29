@class AWEECFeedEntranceRequestBuilder;

@interface AWEECFeedEntranceDirector : NSObject

@property (class, nonatomic) BOOL panelIsShowing;

@property (nonatomic) BOOL isOrdered;
@property (retain, nonatomic) AWEECFeedEntranceRequestBuilder *builder;

+ (Class)aAWEPadSplitScreenAdapterClass;

- (id)aAWEPadSplitScreenAdapter;
- (void)p_trackAd;
- (void)enterOpenUrl:(id)a0 param:(id)a1;
- (void)openWithSchema:(id)a0;
- (void)openSkuPanelWithSchema:(id)a0;
- (void)trackProductAnchorClick;
- (void)enterGoodsDetailPage;
- (BOOL)p_showLubanPanelWJPRequest:(id)a0;
- (void)trackProductEntranceClick;
- (void)routeAnchorUrl;
- (void)preLoadInnerFeed;
- (void)enterInternalFeedFlow;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

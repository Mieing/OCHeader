@class NSString, NSDictionary, AWEAddWidgetGuideView, NSMutableArray;
@protocol AWEUGWidgetAddGuideViewDelegate;

@interface AWEAddWidgetGuideManager : NSObject <AWEAddWidgetGuideViewDelegate, AWEUGAddWidgetGuideManagerProtocol>

@property (retain, nonatomic) NSMutableArray *widgetGuideModels;
@property (copy, nonatomic) NSDictionary *widgetKeyNameMap;
@property (copy, nonatomic) NSDictionary *widgetKeyImageMap;
@property (weak, nonatomic) id<AWEUGWidgetAddGuideViewDelegate> delegate;
@property (weak, nonatomic) AWEAddWidgetGuideView *currentGuideView;
@property (copy, nonatomic) NSString *currentWidgetKey;
@property (copy, nonatomic) NSString *currentWidgetType;
@property (nonatomic) long long from;
@property (copy, nonatomic) NSDictionary *currentTrackParams;
@property (nonatomic) BOOL manageShowHide;
@property (nonatomic) BOOL isUpdatingGecko;
@property (copy, nonatomic) NSString *cdnURLString;
@property (copy, nonatomic) NSDictionary *widgetKindMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadBizUIAdapterClass;
+ (Class)aAWEUGAddWidgetGuideManagerCommonAdapterClass;
+ (id)sharedManager;

- (void)showAddWidgetGuideViewWithWidgetKey:(id)a0 container:(id)a1 useMask:(BOOL)a2 delegate:(id)a3 extraImageURLs:(id)a4 from:(long long)a5 trackParams:(id)a6;
- (void)createWidgetGuideViewWithWidgetKey:(id)a0 delegate:(id)a1 extraImageURLs:(id)a2 from:(long long)a3 trackParams:(id)a4 completion:(id /* block */)a5;
- (void)refreshWidgetGuideViewLayout:(long long)a0;
- (void)hideCurrentWidgetGuideView;
- (id)aAWEPadBizUIAdapter;
- (void)widgetGuideViewStartToAddWidget:(id)a0;
- (void)widgetGuideViewDidShow:(id)a0;
- (void)widgetGuideViewDidHide:(id)a0;
- (void)widgetGuideView:(id)a0 displayPage:(long long)a1;
- (void)trackUGWidgetGuideShow;
- (void)trackGuideShow;
- (void)widgetNameWithKey:(id)a0 completion:(id /* block */)a1;
- (id)widgetNameFromKey:(id)a0;
- (id)aAWEUGAddWidgetGuideManagerCommonAdapter;
- (void)updateWidgetKeyNameMap:(id)a0;
- (void)trackGuideTimeCost:(double)a0 isShow:(BOOL)a1 widgetKey:(id)a2 extraParams:(id)a3;
- (id)setupAskModelsWithWidgetKey:(id)a0 usingConfig:(id)a1 isLocalResource:(BOOL)a2;
- (id)setupGuideModelsForWidgetKey:(id)a0 usingConfig:(id)a1 isLocalResource:(BOOL)a2 extraImageURLs:(id)a3;
- (void)saveWidgetGuideShowTime:(id)a0;
- (BOOL)hasGuideResourceForWidgetKey:(id)a0 error:(id *)a1;
- (void)updateGeckoResource;
- (void)trackGuideViewShowWithWidgetType:(id)a0 enterFrom:(long long)a1 trackParams:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end

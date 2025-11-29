@class IESECQualityInfoV2, IESECShopBffTabResponse, NSMutableDictionary, IESECShopPreloadInfoResponse, IESECShopActivityResponse, UIViewController, IESECShopInfoResponse, IESECStorePageContext;
@protocol IESECStoreContainerProtocol;

@interface IESECStoreContainerViewModel : NSObject

@property (retain, nonatomic) IESECShopInfoResponse *infoResponse;
@property (retain, nonatomic) IESECShopPreloadInfoResponse *preloadInfoResponse;
@property (retain, nonatomic) IESECShopActivityResponse *activityResponse;
@property (retain, nonatomic) IESECShopBffTabResponse *bffTabResponse;
@property (nonatomic) unsigned long long apiStatus;
@property (retain, nonatomic) NSMutableDictionary *lastTopTabTypeDict;
@property (weak, nonatomic) UIViewController<IESECStoreContainerProtocol> *container;
@property (retain, nonatomic) IESECStorePageContext *pageContext;
@property (weak, nonatomic) IESECQualityInfoV2 *qualityInfo;
@property (nonatomic) long long selectedBottomTabIndex;
@property (nonatomic) BOOL extensionAreaHasAnimated;
@property (nonatomic) BOOL inExtensionAreaAnimation;
@property (nonatomic) BOOL statusBarStyle;
@property (nonatomic) BOOL isCloseUp;
@property (retain, nonatomic) NSMutableDictionary *prefetchTasks;

- (void)prefetchLynxTemplate;
- (void)fetchInfoAndTabData;
- (void)fetchInfoData;
- (void)fetchTabData;
- (void)fetchActivityData;
- (void)prefetchInfoDataConsumer:(BOOL)a0 callBack:(id /* block */)a1;
- (void)prefetchTabData:(id /* block */)a0;
- (void)preconnectRelationPicHosts;
- (void)trackEnterStorePage:(id)a0;
- (void)prefetchPreloadInfo;
- (void)configBffTabResponse:(id)a0;
- (id)p_trackerBusinessParams;
- (void)trackStorePageView;
- (void)prefetchInfoDataConsumer:(BOOL)a0 customPath:(id)a1 callBack:(id /* block */)a2;
- (void)prefetchTabDataWithCustomPath:(id)a0 completion:(id /* block */)a1;
- (void)updateLastTopTabTypeDictWithTabModelArray:(id)a0;
- (void)trackEnterStorePage:(id)a0 withBottomTabModel:(id)a1;
- (void)trackCommoditySourceTabShow:(id)a0;
- (void)trackCommoditySourceBottomTabClick:(id)a0;
- (void)trackCommoditySourceTabShow:(id)a0 withBottomTabModel:(id)a1;
- (void)trackCommoditySourceTabClick:(id)a0 withBottomTabModel:(id)a1;
- (void)p_fetchInfoDataWithCustomPath:(id)a0 completion:(id /* block */)a1;
- (void)p_fetchTabDataWithCustomPath:(id)a0 completion:(id /* block */)a1;
- (void)p_preloadInfoWithCompletion:(id /* block */)a0;
- (void)fetchInfoDataWithCompletion:(id /* block */)a0;
- (void)p_handleFetchTabDataFinish:(id)a0;
- (void)fetchInfoDataWithCustomPath:(id)a0 completion:(id /* block */)a1;
- (void)p_fetchActivityDataWithCompletion:(id /* block */)a0;
- (long long)calculateSelectedIndexWithTabModelArray:(id)a0 defaultTabType:(unsigned long long)a1;
- (id)p_extParamJSONString;
- (id)p_clientParams;
- (id)p_fillExtParamWithSchemaKey:(id)a0 value:(id)a1;
- (id)p_tabNameForTrack:(id)a0 withBottomTabModel:(id)a1;
- (void)trackCommoditySourceTabShow:(id)a0 withBottomTabModel:(id)a1 lastTopTabTypeDict:(id)a2;
- (id)p_classificationPageVersion:(id)a0;
- (void)trackCommoditySourceBottomTabClick:(id)a0 selectedBottomTabIndex:(long long)a1;
- (void)onlyFetchInfoDataWithCompletion:(id /* block */)a0;
- (long long)calculateShowTabViewElement:(unsigned long long)a0 withTabModelArray:(id)a1;
- (void)generateTabInfosWithTabModelArray:(id)a0 completion:(id /* block */)a1;
- (id)p_refreshScene:(unsigned long long)a0;
- (void)trackCommoditySourceTabShow:(id)a0 lastTopTabTypeDict:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)reportError:(id)a0;

@end

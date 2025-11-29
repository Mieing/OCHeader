@class IESLiveGiftDynamicPageExtraHelper, NSMutableDictionary, IESLiveGiftDynamicExtraHelper, NSDictionary, NSString, IESLiveCombineSubject, NSObject;
@protocol OS_dispatch_queue, IESLiveHTTPTask;

@interface IESLiveGiftExtraInfoManager : NSObject <IESLiveGiftExtraInfoManagerInterface>

@property (retain, nonatomic) NSMutableDictionary *extraInfosDic;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain, nonatomic) id<IESLiveHTTPTask> taskWhenGiftPanelShow;
@property (retain, nonatomic) IESLiveCombineSubject *giftExtraFetchedCombineSubject;
@property (nonatomic) BOOL enableFixExtraSubjectLifeCycle;
@property (nonatomic) BOOL enableJSBSaveExtraRefreshSubject;
@property (retain, nonatomic) NSMutableDictionary *giftId2subject;
@property (nonatomic) BOOL enableDynamicPanel;
@property (retain, nonatomic) IESLiveGiftDynamicExtraHelper *dynamicSingleGiftExtraHelper;
@property (retain, nonatomic) IESLiveGiftDynamicPageExtraHelper *dynamicSinglePageExtraHelper;
@property (retain, nonatomic) NSDictionary *sceneConf;
@property (nonatomic) BOOL enableExtraCacheOpt;
@property (nonatomic) BOOL hadUpdateCacheInLifeCircle;
@property (retain, nonatomic) NSDictionary *dynamicExtraDefinitionDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)setExtra:(id)a0 forKey:(id)a1;
- (void)removeAllData;
- (void)requestGiftExtraInfosWithGiftIds:(id)a0 roomModel:(id)a1 toUser:(id)a2 source:(id)a3 completion:(id /* block */)a4;
- (void)requestGiftExtraInfosWhenShowGiftPanelViewWithGiftPages:(id)a0 roomModel:(id)a1 toUser:(id)a2 recipientChanged:(BOOL)a3 currentSelectedGift:(id)a4 completion:(id /* block */)a5;
- (void)removeExtraForKey:(id)a0;
- (id)getGiftInfoModelWithGiftId:(id)a0;
- (id)dynamicPageExtraCacheForKey:(id)a0;
- (id)onPageExtraInfoFetched;
- (id)findSceneConfigWithSceneName:(id)a0;
- (void)updateWithDataType:(long long)a0 messageType:(id)a1 definition:(id)a2;
- (void)dynamicExtraForGiftId:(id)a0 completion:(id /* block */)a1;
- (id)dynamicPageExtraForKey:(id)a0;
- (id)dynamicExtraCacheForGiftId:(id)a0;
- (id)onGiftExtraInfoFetched;
- (void)initExtraDataWithCache;
- (id)_requestGiftExtraInfosWithRequestParams:(id)a0 completion:(id /* block */)a1;
- (void)cancelGiftExtraInfoTaskOfPanelShow;
- (void)realRequestGiftExtraInfosWhenShowGiftPanelViewWithGiftPages:(id)a0 roomModel:(id)a1 toUser:(id)a2 recipientChanged:(BOOL)a3 currentSelectedGift:(id)a4 completion:(id /* block */)a5;
- (void)asyncGetGiftIdsForReqExtraInfosWithGiftPages:(id)a0 currentSelectedGift:(id)a1 completion:(id /* block */)a2;
- (id)_getGiftInfoModelWithGiftId:(long long)a0;
- (void)sendExtraWithPublisher:(id)a0 extra:(id)a1;
- (void)refreshExtraSubscriberWithExtras:(id)a0 giftIds:(id)a1;
- (void)mergeCurrentDataWith:(id)a0 giftIds:(id)a1;
- (id)_realRequestGiftExtraInfosWithRequestParams:(id)a0 completion:(id /* block */)a1;
- (id)observeGiftExtraInfoById:(long long)a0;
- (void)updateGiftExtraModel:(id)a0;
- (void)publishExtraRefreshedWith:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setupConfig;

@end

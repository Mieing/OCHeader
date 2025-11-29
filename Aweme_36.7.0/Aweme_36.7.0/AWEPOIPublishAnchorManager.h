@class NSString, NSMutableDictionary, NSDictionary, AWEStudioLocalLifeNoticeItemModel, NSMutableArray, NSObject, AWEStudioLocalLifeMissionRequestModel, NSNumber;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface AWEPOIPublishAnchorManager : NSObject <BDXPopupEventProtocol, AWEPOIPublishAnchorManagerProtocol>

@property (retain, nonatomic) AWEStudioLocalLifeMissionRequestModel *cacheData;
@property (retain, nonatomic) AWEStudioLocalLifeNoticeItemModel *currentPunishItem;
@property (retain, nonatomic) NSMutableArray *punishItemsAry;
@property (nonatomic) long long cacheDataExpireTime;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *requestSemphore;
@property (nonatomic) double lastRequestTimeInterval;
@property (nonatomic) BOOL isAlreadyShowPunish;
@property (nonatomic) BOOL shouldShowPunish;
@property (nonatomic) BOOL isPunishShowing;
@property (retain, nonatomic) NSNumber *isImageAlbumStyleNum;
@property (copy, nonatomic) NSString *lifeAnchorParams;
@property (copy, nonatomic) NSString *lifeAnchorParamPersist;
@property (retain, nonatomic) NSDictionary *videoChannelConfig;
@property (retain, nonatomic) NSMutableDictionary *alreadyRequestGeckoResource;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *geckoResourceAccessQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *punishPopupSchema;

+ (id)sharedManager;

- (void)popupDidCloseWithContainer:(id)a0 params:(id)a1;
- (void)downloadGeckoResourceForScene:(id)a0;
- (void)resetLocalLifeAnchorPublishConfigInfo;
- (void)prefetchPoiSearchDataWithRequestInfo:(id)a0 completion:(id /* block */)a1;
- (void)trackAnchorApiRequestWithPath:(id)a0 params:(id)a1;
- (id)p_showLocalLifeAnchorPublishPunishPopupWithInsideNext:(BOOL)a0 autoToast:(BOOL)a1;
- (void)showPunishNoticeToastManualSelectIfNeed;
- (id)p_tryToNextPunishItem;
- (void)requestAnchorPublishPunishAck:(id /* block */)a0;
- (void)setLocalLifeAnchorPublishPunishCanShow:(BOOL)a0;
- (void)getLocalLifeAnchorPublishConfigInfoWithIsImageAlbumStyle:(BOOL)a0 lifeAnchorParams:(id)a1 lifeAnchorParamPersist:(id)a2 completion:(id /* block */)a3;
- (id)getCacheLocalLifeConfigInfo;
- (id)tryToShowLocalLifeAnchorPublishPunishPopupWithToast:(BOOL)a0;
- (BOOL)isAlreadyShowLocalLifeAnchorPublishPunishPopup;
- (void).cxx_destruct;
- (id)init;

@end

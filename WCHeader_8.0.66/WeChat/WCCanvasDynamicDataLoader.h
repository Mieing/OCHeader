@protocol WCCanvasDynamicDataLoaderDelegate;

@interface WCCanvasDynamicDataLoader : MMObject <PBMessageObserverDelegate>

@property (weak, nonatomic) id<WCCanvasDynamicDataLoaderDelegate> delegate;

+ (void)cleanCanvasServerDataCacheWithLoadParams:(id)a0;
+ (BOOL)cacheUxDynamicXML:(id)a0 forCanvasId:(id)a1 canvasExt:(id)a2;
+ (BOOL)cacheCanvasServerData:(id)a0 forLoadParams:(id)a1;
+ (unsigned long long)cleanCacheMgrMakeToClean;
+ (unsigned long long)preCleanGetCacheSize;

- (id)init;
- (void)dealloc;
- (void)loadGameCanvasDynamicDataForApp:(id)a0 shareType:(id)a1 userInfo:(id)a2;
- (id)getCachedCanvasServerDataForLoadParams:(id)a0;
- (void)loadCanvasServerDataForLoadParams:(id)a0;
- (void)loadUxDynamicXMLForCanvasId:(id)a0 canvasExt:(id)a1 shouldCache:(BOOL)a2;
- (id)getCachedUxXMLForCanvasId:(id)a0 canvasExt:(id)a1;
- (void)favProduct:(id)a0;
- (void)loadUxCanvasDynamicDataForSyncBuffer:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleUxCanvasInfoResponse:(id)a0;
- (void)handleGameCanvasInfoResponse:(id)a0;
- (void)handleAdCanvasInfoResponse:(id)a0;
- (void)handleFavOfficialItemResponse:(id)a0;
- (void)handleOfficialSyncResponse:(id)a0;
- (void)loadSmartPhoneWithSid:(unsigned int)a0 compId:(unsigned int)a1 aid:(unsigned long long)a2 traceId:(id)a3 uxinfo:(id)a4 pageId:(id)a5;
- (void)handleGetSmartPhoneResponse:(id)a0;
- (void)updateSharedUxinfo:(id)a0 enterScene:(unsigned int)a1;
- (void)updateSharedUxinfoResponse:(id)a0;
- (void)updateQrCodeWithPoi:(id)a0 qrExtInfo:(id)a1 uxInfo:(id)a2 componentId:(id)a3 snsId:(id)a4;
- (void)requestRedPacketCoverUrl:(id)a0 uxinfo:(id)a1 pageId:(id)a2 canvasId:(id)a3 twistId:(id)a4 autoJump:(BOOL)a5;
- (void)handleUpdateQrCodeResponse:(id)a0;
- (void)updateProfileUsernameWithGroupInfo:(id)a0 andUxinfo:(id)a1;
- (void)handleupdateProfileUsernameResponse:(id)a0;
- (void)doSearchContactWithAliasname:(id)a0;
- (void)fetchTwistCardIdWithSnsId:(id)a0 uxInfo:(id)a1 extInfo:(id)a2 canvasId:(id)a3 pageId:(id)a4 canvasScene:(int)a5;
- (void)handleFetchTwistCardIdResponse:(id)a0;
- (void)fetchTwistCardStatusWithUxInfo:(id)a0 canvasScene:(int)a1 opType:(unsigned int)a2 cardId:(id)a3 cardType:(unsigned int)a4 giveCardId:(id)a5 canvasId:(id)a6 pageId:(id)a7;
- (void)handleFetchTwistCardStatusResponse:(id)a0;
- (void)handleSearchContactResponse:(id)a0;
- (void)getCouponWithAppId:(id)a0 stockId:(id)a1 uxInfo:(id)a2 componentId:(id)a3;
- (void)handleGetCouponResponse:(id)a0;
- (void)updateCanvasStateWithCanvasId:(id)a0 uxinfo:(id)a1 enterScene:(int)a2 adExtInfo:(id)a3 pageId:(id)a4 canvasDynamicInfo:(id)a5 localCacheTime:(unsigned long long)a6;
- (void)handleUpdateCanvasStateResponse:(id)a0;
- (void)getWeWorkContactWithJumpParams:(id)a0 searchScene:(unsigned long long)a1 subScene:(int)a2;
- (void)handleGetRedPacketCoverUrlResponse:(id)a0;
- (void)requestPersonalizedAdSwitch:(long long)a0;
- (void)handlePersonalizedAdSwitchResp:(id)a0;
- (void).cxx_destruct;

@end

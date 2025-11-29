@class ACCToolsPerformanceTracker, NSMutableDictionary, NSString;
@protocol ACCResourcesUploadServiceProtocol;

@interface AWEStickerApplyEffectUGCDataHandler : AWEStickerApplyBaseHandler <ACCRecordFlowServiceSubscriber>

@property (retain, nonatomic) NSMutableDictionary *effectUGCPathDic;
@property (retain, nonatomic) id<ACCResourcesUploadServiceProtocol> resourceUploader;
@property (retain, nonatomic) ACCToolsPerformanceTracker *tracker;
@property (copy, nonatomic) NSString *resourcePath;
@property (copy, nonatomic) NSString *ugcId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)flowServiceDidAddFragment:(id)a0;
- (void)flowServiceDidRemoveFragment:(id)a0;
- (void)flowServiceDidRemoveAllSegment;
- (id)publishModel;
- (id)parseUserInfoFromJsonString:(id)a0;
- (void)camera:(id)a0 didRecvMessage:(id)a1;
- (void)camera:(id)a0 willApplySticker:(id)a1;
- (id)parseUgcIdFromJsonString:(id)a0;
- (id)p_transferUgcId:(id)a0;
- (void)handlerDidBecomeActive;
- (BOOL)isInheritableEffect:(id)a0;
- (void)trackEffectUgcDataFollowShoot;
- (id)parseSceneFromJsonString:(id)a0;
- (void)p_fetchEffectUGCListWithParams:(id)a0;
- (void)p_handleUserUidMessage:(id)a0 taskID:(long long)a1;
- (id)p_currentProp;
- (id)p_createEffectCachePathWithProp:(id)a0;
- (void)p_clearEffectUGC:(id)a0;
- (void)p_sendWritePathToEffect:(id)a0;
- (id)allowedPathWithFragmentKey:(id)a0;
- (void)p_clearAllEffectUGCPaths;
- (void)p_sendReadPathToEffect:(id)a0;
- (void)p_clearEffectUGCPath:(id)a0;
- (id)decodeArg3:(id)a0;
- (void)p_sendMessageToEffectForAvatar:(id)a0 taskId:(long long)a1;
- (void).cxx_destruct;

@end

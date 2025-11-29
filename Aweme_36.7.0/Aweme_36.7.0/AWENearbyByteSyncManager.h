@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface AWENearbyByteSyncManager : NSObject <AWENearbyByteSyncManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *callbacks;
@property (retain, nonatomic) NSMutableDictionary *processers;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *syncLock;
@property (nonatomic) long long syncRegisterTimeStamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)handlePullMsgData:(id)a0 type:(long long)a1;
- (void)registerDownstreamMessageForType:(long long)a0 callback:(id /* block */)a1;
- (void)requestFeedbackMessage:(id)a0;
- (void)handleHotFeedMsgData:(id)a0 type:(long long)a1;
- (void)registerDownstreamMessageProcesser:(long long)a0 processer:(id /* block */)a1;
- (void)sendUpstreamMessage:(id)a0;
- (void)registerBussinessIDForByteSync;
- (void)retryUploadMsgAtColdStart;
- (int)nearbyBussinessID;
- (void)__handleDownstreamMessage:(id)a0 businessID:(long long)a1;
- (long long)nearbyUIDBusinessID;
- (long long)nearbyDIDBusinessId;
- (void)handleDownstreamMessage:(id)a0 error:(id)a1;
- (void)cacheByteSyncDownStreamMsg:(id)a0 type:(long long)a1;
- (void)sendCacheMsgIfNeeded:(long long)a0;
- (void)sendUpstreamMessage:(id)a0 withBussinessID:(long long)a1;
- (void)requestFeedbackMessage:(id)a0 queryParams:(id)a1 retry:(unsigned long long)a2 isCodeStart:(BOOL)a3;
- (void)requestFeedbackMessage:(id)a0 queryParams:(id)a1;
- (id)convertByteSyncMsgWithData:(id)a0 error:(id *)a1;
- (void)injectMessage:(id)a0 type:(long long)a1 fail:(id *)a2;
- (id)getFeedbackMessageURLWithrequestList:(id)a0;
- (void)trackEvent:(id)a0 errorMsg:(id)a1 uploadTimes:(long long)a2 isSuccess:(BOOL)a3 isCodeStart:(BOOL)a4;
- (void)removeCacheModelWithindex:(unsigned long long)a0;
- (id)updataNearbyStorageCacheWithModel:(id)a0;
- (void)sendUpstreamMessageWithNearbyUIDBusinessID:(id)a0;
- (void)sendUpstreamMessageWithJsonString:(id)a0;
- (void)requestFeedbackMessageWithData:(id)a0;
- (BOOL)didRegisterDownstreamMessageForType:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

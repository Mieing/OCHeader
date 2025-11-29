@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, AWEECOMIMPaasClientBridgeProtocol;

@interface AWEDeliveryLoginUtil : NSObject <AWEUserMessage>

@property (retain) id<AWEECOMIMPaasClientBridgeProtocol> pigeonClient;
@property (retain, nonatomic) NSMutableDictionary *currentUserInfoMap;
@property (retain, nonatomic) NSMutableDictionary *serviceInfoMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)appKey;
+ (long long)appVersionCode;
+ (id)imClient;
+ (id)pigeonClient;
+ (void)currentUserInfoOfPigeonBizType:(id)a0 completion:(id /* block */)a1;
+ (void)serviceInfoOfPigeonBizType:(id)a0 latestServerID:(id)a1 completion:(id /* block */)a2;
+ (void)clearAllCachedInfoMapWhenPageClosed;
+ (id)generateNotificationKeyWithKey:(id)a0;
+ (void)setupPigeonClientForBizType:(id)a0 completion:(id /* block */)a1;
+ (id)currentUserInfoCacheKeyForPigeonBizType:(id)a0;
+ (void)saveUserInfoModel:(id)a0 withCacheKey:(id)a1;
+ (id)serviceInfoCacheKeyForPigeonBizType:(id)a0 latestServerID:(id)a1;
+ (void)saveServiceInfoModel:(id)a0 withCacheKey:(id)a1;
+ (id)shortLinkServerURLString;
+ (id)wsServerURLsArr;
+ (id)fPid;
+ (long long)fpServiceIntegerValue;
+ (long long)bizWsServiceIntegerValue;
+ (id)wsCustomHeadersDict;
+ (id)customBizID;
+ (id)imsdkConfig;
+ (void)preCheckExec:(id /* block */)a0;
+ (id)shared;

@end

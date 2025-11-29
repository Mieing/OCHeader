@class NSString, NSMutableDictionary;

@interface CJPayChannelManager : NSObject <CJPayChannelManagerModule>

@property (retain, nonatomic) NSMutableDictionary *payChannelClsDict;
@property (retain, nonatomic) NSMutableDictionary *payChannelObjDict;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } mutexLock;
@property (copy, nonatomic) NSString *appleMerchantID;
@property (copy, nonatomic) NSString *h5PayReferUrl;
@property (copy, nonatomic) NSString *h5PayCustomUserAgent;
@property (copy, nonatomic) NSString *wxUniversalLink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;
+ (id)sharedInstance;

- (BOOL)canProcessWithURL:(id)a0;
- (BOOL)canProcessUserActivity:(id)a0;
- (BOOL)preLoadChannelWithType:(unsigned long long)a0;
- (BOOL)wakeByUniversalPayDesk:(id)a0 withDelegate:(id)a1;
- (id)i_wxH5PayReferUrlStr;
- (void)i_registerWXH5PayReferUrlStr:(id)a0;
- (void)i_registerWXUniversalLink:(id)a0;
- (BOOL)i_canProcessURL:(id)a0;
- (BOOL)i_canProcessUserActivity:(id)a0;
- (BOOL)i_currentChannelIsInstalled:(unsigned long long)a0;
- (BOOL)i_preLoadChannelWithType:(unsigned long long)a0;
- (void)i_payActionWithChannel:(unsigned long long)a0 dataDict:(id)a1 completionBlock:(id /* block */)a2;
- (void)registerChannelClass:(Class)a0 channelType:(unsigned long long)a1;
- (void)p_trackWithEventName:(id)a0 params:(id)a1 extParams:(id)a2;
- (id)getChannelObjectWithType:(unsigned long long)a0;
- (void)removeChannelObjectWithType:(unsigned long long)a0;
- (void)payActionWithType:(unsigned long long)a0 dataDict:(id)a1 completionBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

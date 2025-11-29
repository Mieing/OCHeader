@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface BDUGLuckyDogCookieManager : NSObject <BDUGLuckyCleanCacheDelegateProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cookieQueue;
@property (copy, nonatomic) NSString *actToken;
@property (copy, nonatomic) NSString *environment;
@property (copy, nonatomic) NSString *actBase;
@property (copy, nonatomic) NSString *actData;
@property (nonatomic) BOOL isLoginInOtherApps;
@property (nonatomic) BOOL hasMergeData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)onCleanCache;
+ (void)preStartupCookieModule;
+ (id)sharedInstance;
+ (id)moduleName;

- (id)getActToken;
- (void)cleanCookie;
- (id)getActInfoByActId:(id)a0;
- (void)tryToMergeInfo;
- (id)getActData;
- (id)getActBase;
- (void).cxx_destruct;
- (id)init;
- (id)getEnvironment;

@end

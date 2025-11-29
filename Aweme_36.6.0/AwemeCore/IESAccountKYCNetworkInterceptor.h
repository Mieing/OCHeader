@interface IESAccountKYCNetworkInterceptor : NSObject

@property (nonatomic) BOOL isHandlingKYCInfo;

+ (void)setupIfNeed;
+ (id)headerFilter;
+ (id /* block */)retryCallback;
+ (id)sharedInstance;

- (void)handleSchema:(id)a0;
- (id)notNeedHandleKYC;
- (id)handleKYCInfoModel:(id)a0;
- (id)handleRetryKYCInfoModel:(id)a0;
- (id)handleNotRetryKYCInfoModel:(id)a0;
- (void)showKYCInfoModel:(id)a0 callback:(id /* block */)a1;
- (void)showKYCInfoModel:(id)a0;
- (void)handleAuth:(id)a0 callback:(id /* block */)a1;
- (void)triggerKYCCacheAuthResult:(id)a0 callback:(id /* block */)a1;

@end

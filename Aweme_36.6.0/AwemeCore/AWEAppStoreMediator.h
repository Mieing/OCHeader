@class NSString, NSDate;

@interface AWEAppStoreMediator : NSObject

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *creativeID;
@property (copy, nonatomic) NSString *extra;
@property (retain, nonatomic) NSDate *begin;

+ (id)ntType;
+ (id)sharedInstance;

- (void)handleLoadSuccess:(id)a0;
- (void)preloadWithAppID:(id)a0 downloadUrl:(id)a1 SKANParams:(id)a2 adID:(id)a3 logExtra:(id)a4 referString:(id)a5 ppid:(id)a6 downloadScene:(unsigned long long)a7 webURL:(id)a8 complianceData:(id)a9 completion:(id /* block */)a10;
- (void)trackEvent:(id)a0 label:(id)a1 appID:(id)a2 creativeID:(id)a3 extra:(id)a4 extraAttributes:(id)a5;
- (void)trackAppStoreCompleteDurationWithAppID:(id)a0 creativeID:(id)a1 extra:(id)a2;
- (void)preloadWithAppID:(id)a0 downloadUrl:(id)a1 SKANParams:(id)a2 adID:(id)a3 logExtra:(id)a4 referString:(id)a5 ppid:(id)a6 completion:(id /* block */)a7;
- (void)trackAppStoreWithAppID:(id)a0 creativeID:(id)a1 extra:(id)a2;
- (void)trackAppStoreCompleteWithAppID:(id)a0 creativeID:(id)a1 extra:(id)a2 success:(BOOL)a3;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

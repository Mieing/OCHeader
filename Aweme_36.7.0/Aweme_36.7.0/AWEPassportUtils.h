@class NSString;

@interface AWEPassportUtils : NSObject <AWEPassportUtils>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackData:(id)a0 logTypeStr:(id)a1;
+ (void)trackService:(id)a0 status:(long long)a1 extra:(id)a2;
+ (BOOL)isCurrentLanguage:(id)a0;
+ (void)trackEvent:(id)a0 params:(id)a1 needStagingFlag:(BOOL)a2;
+ (id)stringForCarrierType:(long long)a0;
+ (id)translateString:(id)a0;
+ (void)setupImplementation:(id)a0;
+ (id)stringValueForCarrierType:(long long)a0;
+ (id)currentCarrierNetworkType;
+ (id)currentNetworkType;
+ (id)currentLanguage;


@end

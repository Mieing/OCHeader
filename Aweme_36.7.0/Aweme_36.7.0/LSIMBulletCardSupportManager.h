@class NSDictionary;

@interface LSIMBulletCardSupportManager : NSObject

@property (copy, nonatomic) NSDictionary *supportConfig;
@property (nonatomic) long long requestTimeGap;
@property (nonatomic) double lastRequestSuccessTime;
@property (nonatomic) BOOL isRequesting;

+ (id)sharedInstance;

- (id)loadConfigFromLocal;
- (void)updateCardsSupportConfigIfNeedWithURL:(id)a0;
- (void)saveConfigToLocal:(id)a0;
- (void)updateCustomCardsSupportConfigIfNeed;
- (void)updateServiceCardsSupportConfigIfNeed;
- (BOOL)enableWithCardType:(id)a0;
- (id)messageWithCardType:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)defaultConfig;

@end

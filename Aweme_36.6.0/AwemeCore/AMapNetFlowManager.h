@class NSMutableDictionary, AMapErrorCodeStrategy;

@interface AMapNetFlowManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *blockConfig;
@property (retain, nonatomic) NSMutableDictionary *domainMaps;
@property (retain, nonatomic) NSMutableDictionary *domainStatistic;
@property (retain, nonatomic) AMapErrorCodeStrategy *appBlock;
@property (retain, nonatomic) NSMutableDictionary *errorCodeBlock;

+ (void)updateNetFlowConfig:(id)a0;
+ (id)exchangeDomain:(id)a0;
+ (id)isBlock:(id)a0;
+ (void)checkResponse:(id)a0 withRequest:(id)a1 responseData:(id)a2;
+ (id)sharedManager;

- (void)updateNetFlowConfig:(id)a0;
- (void)loadCloudConfig;
- (id)exchangeDomain:(id)a0;
- (id)isBlock:(id)a0;
- (void)checkResponse:(id)a0 withRequest:(id)a1 responseData:(id)a2;
- (void)updateNetFlowBlockConfig:(id)a0;
- (void)updateNetFlowDomainMapsConfig:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

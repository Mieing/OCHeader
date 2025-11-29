@class NSString, NSDictionary;

@interface AWEHPLandingStrategyModel : MTLModel <MTLJSONSerializing, AWEHPLandingStrategyModelProtocol>

@property (retain, nonatomic) NSString *pitayaTraceId;
@property (retain, nonatomic) NSString *strategyId;
@property (retain, nonatomic) NSString *strategyType;
@property (retain, nonatomic) NSString *tabId;
@property (nonatomic) long long expirationTime;
@property (retain, nonatomic) NSDictionary *bizParams;
@property (retain, nonatomic) NSDictionary *strategyConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;

@end

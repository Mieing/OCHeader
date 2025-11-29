@class NSString, NSArray, IESECOrderListFreqServerStore;

@interface IESECOrderListFrequencyModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isSkipAppFrequency;
@property (copy, nonatomic) NSString *freqLimitID;
@property (nonatomic) long long maxStoreNum;
@property (copy, nonatomic) NSArray *freqLimitStrategy;
@property (retain, nonatomic) IESECOrderListFreqServerStore *freqServerStore;
@property (copy, nonatomic) NSArray *freqScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)freqServerStoreJSONTransformer;
+ (id)freqLimitStrategyJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end

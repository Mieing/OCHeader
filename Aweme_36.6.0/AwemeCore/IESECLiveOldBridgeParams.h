@class NSDictionary;

@interface IESECLiveOldBridgeParams : IESLiveBridgeModel

@property (copy, nonatomic) NSDictionary *rawParams;

+ (id)bd_modelWithDictionary:(id)a0;

- (BOOL)bd_modelSetWithDictionary:(id)a0;
- (void).cxx_destruct;

@end

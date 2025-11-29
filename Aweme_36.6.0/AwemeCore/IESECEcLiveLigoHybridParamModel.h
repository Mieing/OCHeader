@class NSString, NSDictionary;

@interface IESECEcLiveLigoHybridParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *function;
@property (copy, nonatomic) NSString *bizName;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *roomId;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end

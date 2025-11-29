@class NSString, NSDictionary;

@interface IESECEcWritePerfSessionParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *stage;
@property (copy, nonatomic) NSString *stageType;
@property (copy, nonatomic) NSString *timestamp;
@property (copy, nonatomic) NSDictionary *stageData;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end

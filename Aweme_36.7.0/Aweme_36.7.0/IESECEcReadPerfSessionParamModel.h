@class NSString;

@interface IESECEcReadPerfSessionParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *stage;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end

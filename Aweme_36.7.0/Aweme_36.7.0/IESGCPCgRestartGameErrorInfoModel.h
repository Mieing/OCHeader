@class NSNumber, NSString;

@interface IESGCPCgRestartGameErrorInfoModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *code;
@property (copy, nonatomic) NSString *msg;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end

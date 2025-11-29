@class NSString;

@interface IESGCPSendXPlayMessageParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end

@class NSString;

@interface IESECLiveSendECAdLogParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) id param;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end

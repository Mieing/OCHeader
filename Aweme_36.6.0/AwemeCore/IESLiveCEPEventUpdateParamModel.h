@class NSString, NSDictionary;

@interface IESLiveCEPEventUpdateParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSDictionary *params;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end

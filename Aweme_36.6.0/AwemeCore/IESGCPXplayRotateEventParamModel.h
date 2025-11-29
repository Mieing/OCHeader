@class NSString, NSDictionary;

@interface IESGCPXplayRotateEventParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *orientation;
@property (copy, nonatomic) NSString *duration;
@property (copy, nonatomic) NSDictionary *extraInfo;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end

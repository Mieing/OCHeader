@class NSString, NSArray;

@interface IESLiveSendDataToTargetLynxParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *from;
@property (copy, nonatomic) NSArray *to;
@property (copy, nonatomic) NSString *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end

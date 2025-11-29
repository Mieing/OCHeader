@class NSString;

@interface IESLiveAddRedDotParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *item;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end

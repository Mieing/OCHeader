@class NSString, NSDictionary;

@interface IESLiveLiveOperateInteractPluginParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *operateType;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *extra;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end

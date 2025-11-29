@class NSString, NSDictionary;

@interface IESGCPCgSetLynxPageVisibleParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *cgLynxId;
@property (nonatomic) BOOL isVisible;
@property (copy, nonatomic) NSDictionary *layoutParams;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end

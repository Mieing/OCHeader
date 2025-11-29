@class NSString, NSDictionary;

@interface IESGCPCgXplayFloatViewEventParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *eventType;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) NSString *cgLynxId;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end

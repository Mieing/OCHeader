@class NSString, NSDictionary;

@interface IESLiveShowCarnivalRedPacketEggParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSDictionary *eventParams;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end

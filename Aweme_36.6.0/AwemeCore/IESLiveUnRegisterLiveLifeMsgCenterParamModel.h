@class NSString, NSDictionary;

@interface IESLiveUnRegisterLiveLifeMsgCenterParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end

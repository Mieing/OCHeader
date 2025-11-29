@class NSString, NSDictionary;

@interface IESLivePostLiveLifeMsgParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSDictionary *params;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end

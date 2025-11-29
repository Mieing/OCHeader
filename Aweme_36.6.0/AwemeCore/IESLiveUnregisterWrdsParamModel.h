@class NSArray, NSString;

@interface IESLiveUnregisterWrdsParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSArray *classList;
@property (copy, nonatomic) NSString *listenerId;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end

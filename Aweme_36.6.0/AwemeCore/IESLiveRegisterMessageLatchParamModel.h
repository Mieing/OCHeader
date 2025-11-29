@class NSString;

@interface IESLiveRegisterMessageLatchParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *messageType;
@property (copy, nonatomic) NSString *definition;
@property (copy, nonatomic) NSString *messageMethod;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end

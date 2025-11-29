@class NSDictionary;

@interface AWEEccsSendMessageDataModel : IESLiveBridgeModel

@property (copy, nonatomic) NSDictionary *message;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end

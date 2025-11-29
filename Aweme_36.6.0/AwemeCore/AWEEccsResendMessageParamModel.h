@class NSString;

@interface AWEEccsResendMessageParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *messageID;
@property (copy, nonatomic) NSString *conversationID;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end

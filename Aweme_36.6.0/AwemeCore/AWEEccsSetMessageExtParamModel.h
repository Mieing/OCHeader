@class NSString, NSDictionary;

@interface AWEEccsSetMessageExtParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *messageID;
@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSDictionary *ext;
@property (copy, nonatomic) NSString *extType;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end

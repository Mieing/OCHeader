@class NSString;

@interface AWEXBridgeEccsSetMessageDataStorageMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *messageId;
@property (copy, nonatomic) NSString *messageClientId;
@property (copy, nonatomic) NSString *conversationId;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *customBizId;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *pigeonBizType;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

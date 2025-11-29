@class NSString, NSDictionary;

@interface AWEXBridgeEcEccsLynxErrorMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *errorCode;
@property (copy, nonatomic) NSString *errorMsg;
@property (copy, nonatomic) NSString *messageUUID;
@property (copy, nonatomic) NSString *cardId;
@property (copy, nonatomic) NSString *conversationId;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

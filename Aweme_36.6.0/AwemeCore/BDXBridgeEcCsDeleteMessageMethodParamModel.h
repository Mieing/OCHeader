@class NSString, NSNumber;

@interface BDXBridgeEcCsDeleteMessageMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *clientMsgId;
@property (copy, nonatomic) NSString *conversationId;
@property (retain, nonatomic) NSNumber *showConfirm;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

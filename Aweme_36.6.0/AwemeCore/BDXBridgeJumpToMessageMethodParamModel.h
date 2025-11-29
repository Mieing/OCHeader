@class NSString;

@interface BDXBridgeJumpToMessageMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *conversationShortId;
@property (copy, nonatomic) NSString *targetUserId;
@property (copy, nonatomic) NSString *messageClientId;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

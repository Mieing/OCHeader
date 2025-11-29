@class NSString, NSNumber;

@interface BDXBridgeImSetUserBubbleMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *bubbleID;
@property (copy, nonatomic) NSString *conversationShortID;
@property (copy, nonatomic) NSString *conversationID;
@property (retain, nonatomic) NSNumber *conversationType;
@property (copy, nonatomic) NSString *expireTime;
@property (nonatomic) long long action;

+ (id)requiredKeyPaths;
+ (id)actionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

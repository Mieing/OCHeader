@class NSString, NSArray;

@interface BDXBridgeImAtChatBotMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *conShortId;
@property (copy, nonatomic) NSString *conId;
@property (copy, nonatomic) NSString *botUserId;
@property (retain, nonatomic) NSArray *containerIDs;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

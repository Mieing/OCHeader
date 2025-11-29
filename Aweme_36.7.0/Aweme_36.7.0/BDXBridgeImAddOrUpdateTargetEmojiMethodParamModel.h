@class NSString, NSArray;

@interface BDXBridgeImAddOrUpdateTargetEmojiMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *conversationShortId;
@property (copy, nonatomic) NSString *resourceId;
@property (copy, nonatomic) NSString *version;
@property (retain, nonatomic) NSArray *emojiIdNameList;
@property (nonatomic) long long actionType;

+ (id)requiredKeyPaths;
+ (id)actionTypeJSONTransformer;
+ (id)emojiIdNameListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

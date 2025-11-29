@class NSString;

@interface BDXBridgeImAddOrUpdateTargetEmojiEmojiIdNameList : BDXBridgeModel

@property (copy, nonatomic) NSString *emojiId;
@property (copy, nonatomic) NSString *emojiName;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

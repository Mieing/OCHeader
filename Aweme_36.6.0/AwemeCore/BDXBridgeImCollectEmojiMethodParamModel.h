@class NSDictionary, NSArray;

@interface BDXBridgeImCollectEmojiMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSDictionary *logmap;
@property (retain, nonatomic) NSArray *emojiList;
@property (nonatomic) long long scene;

+ (id)requiredKeyPaths;
+ (id)sceneJSONTransformer;
+ (id)emojiListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

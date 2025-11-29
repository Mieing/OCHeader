@class NSArray, NSString;

@interface AWEIMAudioEmojiStrategyListConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *emojiList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)emojiListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

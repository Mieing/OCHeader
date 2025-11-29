@class NSString, NSArray, NSDictionary, AWEIMSpecialEmojiConfigModel;

@interface AWEIMSpecialEmojiRelationModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *animationFileName;
@property (retain, nonatomic) NSArray *relationEmojiIDs;
@property (nonatomic) long long type;
@property (retain, nonatomic) AWEIMSpecialEmojiConfigModel *config;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)configJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

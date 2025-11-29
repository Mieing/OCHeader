@class NSString;

@interface AWEIMAudioEmojiModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long identifier;
@property (copy, nonatomic) NSString *emojiName;
@property (copy, nonatomic) NSString *audioUrl;
@property (copy, nonatomic) NSString *audioMd5;
@property (copy, nonatomic) NSString *audioFileType;
@property (copy, nonatomic) NSString *staticEmojiUrl;
@property (copy, nonatomic) NSString *staticEmojiType;
@property (nonatomic) int width;
@property (nonatomic) int height;
@property (nonatomic) int duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

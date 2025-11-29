@class NSString, NSArray, NSDictionary, AWEIMEmojiAuthor, NSNumber;

@interface AWEIMEmoticonThemeModel : IESIMEmoticonThemeModel <AWEIMEmoticonThemeModelProtocol>

@property (nonatomic) long long themeStyle;
@property (copy, nonatomic) NSString *uniqueId;
@property (retain, nonatomic) NSNumber *version;
@property (copy, nonatomic) NSString *icon_url;
@property (retain, nonatomic) NSArray *stickers;
@property (copy, nonatomic) NSDictionary *stickersDict;
@property (retain, nonatomic) AWEIMEmojiAuthor *author;
@property (retain, nonatomic) NSNumber *identifier;
@property (copy, nonatomic) NSString *themeCoverIcon;
@property (retain, nonatomic) NSArray *emoticonArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)stickersJSONTransformer;
+ (id)emoticonArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

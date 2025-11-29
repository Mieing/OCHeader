@class NSString, AWEIMEmojiAuthor, NSArray, NSDictionary, NSNumber;

@interface AWEIMmoticonThemeResponseModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *identifier;
@property (retain, nonatomic) NSNumber *version;
@property (copy, nonatomic) NSString *display_name;
@property (copy, nonatomic) NSString *icon_url;
@property (copy, nonatomic) NSString *activity_icon_url;
@property (copy, nonatomic) NSString *resource_url;
@property (copy, nonatomic) NSString *leanResourceUrl;
@property (copy, nonatomic) NSString *descrip;
@property (retain, nonatomic) AWEIMEmojiAuthor *author;
@property (copy, nonatomic) NSString *copyright;
@property (retain, nonatomic) NSNumber *stickerType;
@property (retain, nonatomic) NSArray *stickerList;
@property (copy, nonatomic) NSString *activityDescription;
@property (copy, nonatomic) NSString *activitySchema;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

@class NSString, NSDictionary;

@interface AWEIMEmojiResourcesListBannerInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *bannerURLStr;
@property (copy, nonatomic) NSString *openURLStr;
@property (copy, nonatomic) NSString *openURLTypeStr;
@property (copy, nonatomic) NSString *displayNameStr;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

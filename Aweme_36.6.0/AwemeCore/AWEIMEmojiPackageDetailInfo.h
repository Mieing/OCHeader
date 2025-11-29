@class NSArray, NSDictionary, AWEIMmoticonThemeResponseModel, NSString;

@interface AWEIMEmojiPackageDetailInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEIMmoticonThemeResponseModel *packageInfo;
@property (retain, nonatomic) NSArray *stickers;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)stickersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

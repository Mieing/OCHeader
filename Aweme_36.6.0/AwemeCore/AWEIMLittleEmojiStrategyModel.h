@class NSString, NSDictionary;

@interface AWEIMLittleEmojiStrategyModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long iosEmojiId;
@property (copy, nonatomic) NSString *resourceUrl;
@property (nonatomic) int version;
@property (copy, nonatomic) NSDictionary *animateUrlList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

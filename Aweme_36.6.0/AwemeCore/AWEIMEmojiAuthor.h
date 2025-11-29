@class NSString, NSDictionary;

@interface AWEIMEmojiAuthor : MTLModel <MTLJSONSerializing, AWEIMEmojiAuthorProtocol>

@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *descrip;
@property (copy, nonatomic) NSString *avatarUrl;
@property (nonatomic) BOOL notFromAweme;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

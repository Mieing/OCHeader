@class NSString, NSArray, NSDictionary, NSNumber, AWEIMSpecialEmojiConfigModel;

@interface AWEIMSpecialEmojiResourceConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL inAdvance;
@property (copy, nonatomic) NSString *triggerType;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *specialResource;
@property (retain, nonatomic) NSNumber *specialType;
@property (copy, nonatomic) NSArray *relationNames;
@property (retain, nonatomic) AWEIMSpecialEmojiConfigModel *config;
@property (retain, nonatomic) NSNumber *version;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)p_enableFixCopyIssue;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

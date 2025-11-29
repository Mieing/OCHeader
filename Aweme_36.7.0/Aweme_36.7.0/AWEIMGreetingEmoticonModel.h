@class AWEIMDisplayNameModel, NSString, NSNumber, AWEURLModel;

@interface AWEIMGreetingEmoticonModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *identifier;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) AWEURLModel *animateUrl;
@property (copy, nonatomic) AWEURLModel *staticUrl;
@property (retain, nonatomic) NSString *staticType;
@property (retain, nonatomic) NSString *animateType;
@property (copy, nonatomic) AWEIMDisplayNameModel *displayNameLang;
@property (nonatomic) unsigned long long stickerType;
@property (retain, nonatomic) NSNumber *originPackageID;
@property (retain, nonatomic) NSNumber *version;
@property (copy, nonatomic) NSString *jokerIndentifier;
@property (copy, nonatomic) NSString *heycanIdentifier;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *sourceDescription;
@property (copy, nonatomic) NSString *sourceSchema;
@property (copy, nonatomic) NSString *activityDescription;
@property (copy, nonatomic) NSString *activitySchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)urlModelJSONTransformer;
+ (id)displayNameLangJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)getCurrentDisplayName;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end

@class NSString, NSArray, NSDictionary;

@interface AWESharePlatformSetting : MTLModel <MTLJSONSerializing, AWESharePlatformSetting>

@property (readonly, nonatomic) NSString *shareType;
@property (copy, nonatomic) NSArray *targetSettings;
@property (retain, nonatomic) NSString *platformId;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) long long mode;
@property (retain, nonatomic) NSString *notifyMsg;
@property (retain, nonatomic) NSString *noticeMsgPreload;
@property (retain, nonatomic) NSString *toastMsg;
@property (copy, nonatomic) NSString *commandMsg;
@property (copy, nonatomic) NSString *bannerUrl;
@property (copy, nonatomic) NSString *contentHTML;
@property (copy, nonatomic) NSString *thirdPlatformContentHTML;
@property (copy, nonatomic) NSString *imContentHTML;
@property (copy, nonatomic) NSString *btnTitle;
@property (copy, nonatomic) NSString *shareDomain;
@property (copy, nonatomic) NSString *shareAppId;
@property (copy, nonatomic) NSString *saveOnlySubtitle;
@property (copy, nonatomic) NSString *tokenOnlySubtitle;
@property (copy, nonatomic) NSString *saveAndTokenSubtitle;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)targetSettingsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

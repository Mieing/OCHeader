@class NSString, NSArray, NSDictionary;

@interface AWEPublishVideoSyncModel_V2 : MTLModel <AWERepositoryDraftProtocol, NSCopying, MTLJSONSerializing>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long state;
@property (nonatomic) BOOL disableAbility;
@property (nonatomic) BOOL enableNewVideoSync;
@property (nonatomic) BOOL rememberChoice;
@property (copy, nonatomic) NSString *tipMessage;
@property (copy, nonatomic) NSString *syncHintText;
@property (copy, nonatomic) NSString *syncAuthText;
@property (copy, nonatomic) NSString *syncAuthTitle;
@property (copy, nonatomic) NSString *syncAuthTextAlignment;
@property (copy, nonatomic) NSArray *limitApps;
@property (copy, nonatomic) NSArray *oldVersionKeysNeedRemove;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)limitAppsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)trackParams;
- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)requestParams;

@end

@class NSString, AWEIMMessage, NSArray, NSDictionary, NSNumber;

@interface AWEIMActionBarConfig : MTLModel <BDModelCustom, MTLJSONSerializing, AWEIMStrategyConfigResponseCompactProtocol>

@property (copy, nonatomic) NSString *configName;
@property (retain, nonatomic) AWEIMMessage *lastMessage;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSArray *buttonConfs;
@property (copy, nonatomic) NSArray *sortGroups;
@property (copy, nonatomic) NSDictionary *scene;
@property (retain, nonatomic) NSNumber *showCountWrapper;
@property (nonatomic) unsigned long long uiStyle;
@property (copy, nonatomic) NSString *uiStyleStr;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (copy, nonatomic) NSArray *baseConfNameArray;
@property (copy, nonatomic) NSString *matchString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)buttonConfsJSONTransformer;
+ (id)sortGroupsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)scene_isNoShowEmoji;
- (BOOL)scene_isOfflineShow;
- (long long)scene_ownerMessagesListActionBarEnryShowInterval;
- (id)scene_conversationTypes;
- (id)scene_groupTypes;
- (id)scene_singleFollowStatus;
- (id)scene_onlineSatus;
- (id)scene_groupRoles;
- (id)scene_LibraKeys;
- (BOOL)scene_devicePlatformSupportsIOS;
- (BOOL)scene_iOSMinVersionCheckPassed;
- (id)compactWithIndexNodes;
- (void)recoverFromIndexNodes:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)showCount;

@end

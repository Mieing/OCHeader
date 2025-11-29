@class NSArray, NSString;

@interface AWEDTOPublishVideoSyncModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL enableNewVideoSync;
@property (copy, nonatomic) NSArray *limitAppGroups;
@property (copy, nonatomic) NSString *tipMessage;
@property (copy, nonatomic) NSArray *oldVersionKeysNeedRemove;
@property (nonatomic) BOOL rememberChoice;
@property (copy, nonatomic) NSString *syncHintText;
@property (copy, nonatomic) NSString *syncAuthText;
@property (copy, nonatomic) NSString *syncAuthTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)limitAppGroupsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

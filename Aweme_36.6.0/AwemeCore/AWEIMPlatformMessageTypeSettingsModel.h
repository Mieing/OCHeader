@class NSString, NSArray;

@interface AWEIMPlatformMessageTypeSettingsModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long messageType;
@property (nonatomic) long long aweType;
@property (copy, nonatomic) NSString *minSupportVersion;
@property (copy, nonatomic) NSArray *messageMenuList;
@property (copy, nonatomic) NSArray *messageMenuItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)appVersionCode;
+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (id)messageMenuItemsWithMessage:(id)a0 conversation:(id)a1 cell:(id)a2;
- (BOOL)belowMinimumSupportVersion;
- (id)__platformMenuTypeToMenuItemDict;
- (void).cxx_destruct;
- (id)initWithRawDictionary:(id)a0;

@end

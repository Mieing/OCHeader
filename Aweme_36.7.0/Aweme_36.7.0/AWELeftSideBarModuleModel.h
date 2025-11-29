@class NSString, NSArray;

@interface AWELeftSideBarModuleModel : MTLModel <MTLJSONSerializing, NSCopying, AWEHPListKitModuleControllerModelProtocol>

@property (copy, nonatomic) NSString *moduleID;
@property (copy, nonatomic) NSString *modulePos;
@property (copy, nonatomic) NSString *moduleType;
@property (copy, nonatomic) NSString *moduleTitle;
@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSString *currentBusinessId;
@property (copy, nonatomic) NSArray *moduleSupportAppearTabs;
@property (nonatomic) BOOL moduleShowCloseButton;
@property (nonatomic) long long moduleShowThreshold;
@property (nonatomic) unsigned long long moduleFooterStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *controllerItems;

+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (void)setHPCommonControllerItems:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)abstract;

@end

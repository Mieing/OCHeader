@class IESECTabKitTabBarDynamicConfig, IESECTabKitSplitStyleConfig, NSArray, NSString, IESECTabKitBackgroundConfig, NSDictionary, IESECTabKitTabBarMultiStateConfig, IESECTabKitNavbarConfigModel, IESECTabKitPopupConfig;

@interface IESECTabKitBFFModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long anchoredTabID;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (copy, nonatomic) NSArray *tabs;
@property (retain, nonatomic) IESECTabKitPopupConfig *popupConfig;
@property (retain, nonatomic) IESECTabKitNavbarConfigModel *navbarConfig;
@property (retain, nonatomic) IESECTabKitSplitStyleConfig *splitStyleConfig;
@property (retain, nonatomic) IESECTabKitTabBarMultiStateConfig *topTabbarStyle;
@property (retain, nonatomic) IESECTabKitTabBarMultiStateConfig *bottomTabbarStyle;
@property (retain, nonatomic) IESECTabKitTabBarDynamicConfig *topTabbarDynamicConfig;
@property (retain, nonatomic) IESECTabKitTabBarDynamicConfig *bottomTabbarDynamicConfig;
@property (retain, nonatomic) IESECTabKitBackgroundConfig *backgroundConfig;
@property (copy, nonatomic) NSDictionary *tabDowngradeConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tabsJSONTransformer;
+ (id)tabDowngradeConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

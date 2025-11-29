@class IESECTabKitTabBarMultiStateConfig, IESECTabKitTabStyleConfigModel, NSString, NSArray, NSDictionary, IESECTabKitTabDynamicConfigModel, IESECTabKitBizConfigModel, IESECTabKitNavbarConfigModel, IESECTabKitSplitStyleConfig;

@interface IESECTabKitTabModel : MTLModel <MTLJSONSerializing> {
    NSString *_jsonString;
}

@property (nonatomic) unsigned long long tabID;
@property (nonatomic) BOOL unactivated;
@property (copy, nonatomic) NSString *tabRawData;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (retain, nonatomic) IESECTabKitBizConfigModel *bizConfig;
@property (copy, nonatomic) NSArray *subTabs;
@property (retain, nonatomic) IESECTabKitNavbarConfigModel *navbarConfig;
@property (copy, nonatomic) NSString *statusBarColor;
@property (retain, nonatomic) IESECTabKitTabStyleConfigModel *styleConfig;
@property (retain, nonatomic) IESECTabKitTabStyleConfigModel *splitStateStyleConfig;
@property (retain, nonatomic) IESECTabKitTabDynamicConfigModel *dynamicConfig;
@property (retain, nonatomic) IESECTabKitSplitStyleConfig *splitStyleConfig;
@property (retain, nonatomic) IESECTabKitTabBarMultiStateConfig *topTabbarStyle;
@property (retain, nonatomic) IESECTabKitTabBarMultiStateConfig *bottomTabbarStyle;
@property (copy, nonatomic) id bizExtraInfo;
@property (nonatomic) double clickTime;
@property (copy, nonatomic) NSString *customBgColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subTabsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)toJSON;

@end

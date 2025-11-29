@class NSNumber;

@interface AWEBasicModeTabBarItemsConfig : NSObject

@property (nonatomic) long long selectedItemType;
@property (readonly, nonatomic) NSNumber *selectedItemTypeObj;
@property (nonatomic, getter=isFeedTabSelected) BOOL feedTabSelected;
@property (nonatomic, getter=isFamiliarTabSelected) BOOL familiarTabSelected;

+ (Class)aAWEBizTabBarModuleServiceCommonAdapterClass;
+ (id)currentReferStringForTabItemType:(long long)a0;
+ (id)sharedInstance;

- (id)tabBarItemTypes;
- (long long)getLandTabItemType;
- (long long)getMainTabItemType;
- (id)aAWEBizTabBarModuleServiceCommonAdapter;
- (void).cxx_destruct;

@end

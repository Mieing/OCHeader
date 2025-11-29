@class NSNumber;

@interface AWENormalModeTabBarItemsConfig : NSObject

@property (nonatomic) long long selectedItemType;
@property (readonly, nonatomic) NSNumber *selectedItemTypeObj;
@property (nonatomic, getter=isFeedTabSelected) BOOL feedTabSelected;
@property (nonatomic, getter=isFamiliarTabSelected) BOOL familiarTabSelected;

+ (id)currentReferStringForTabItemType:(long long)a0;
+ (id)sharedInstance;

- (id)tabBarItemTypes;
- (long long)getLandTabItemType;
- (long long)getMainTabItemType;
- (void).cxx_destruct;

@end

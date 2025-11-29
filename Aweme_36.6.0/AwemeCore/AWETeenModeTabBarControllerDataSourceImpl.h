@class NSString;

@interface AWETeenModeTabBarControllerDataSourceImpl : NSObject <AWETeenModeTabBarControllerDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)selectedTabBarButton;
- (id)tabBarButtons;

@end

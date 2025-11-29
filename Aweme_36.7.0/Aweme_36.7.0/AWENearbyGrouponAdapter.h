@interface AWENearbyGrouponAdapter : NSObject

+ (id)aweNearByCommonDataManager;
+ (BOOL)isGrouponViewDidAppear;
+ (id)grouponViewController;
+ (id)createGrouponContainerViewControllerIfNeeded;
+ (void)releaseGrouponContainerViewControllerIfNeeded;
+ (id)createGrouponContainer;
+ (id)createGrouponSingleContainer;
+ (id)getGrouponC2EventBusWithPageType:(long long)a0;
+ (id)getGrouponInitManager;
+ (BOOL)isGrouponSpilt;

@end

@interface AWEHPTabEditTool : NSObject

+ (BOOL)isSupportBottomSecondEditWithTabID:(id)a0;
+ (BOOL)replaceBottomSecondToTargetTab:(id)a0 withBottomTab:(id)a1 topTab:(id)a2 error:(id *)a3;
+ (void)clearEditWithBottomTab:(id)a0;
+ (id)generateBottomTabListWithBottomTabModel:(id)a0;
+ (BOOL)checkBottomSecondTabReplaceableList:(id)a0 withBottomTab:(id)a1 topTab:(id)a2 error:(id *)a3;
+ (id)generateEditStructWithBottomTabList:(id)a0 topTabList:(id)a1;
+ (id)p_generateTopTabItemWithBottomItem:(id)a0;
+ (id)p_generateBottomTabItemWithTopItem:(id)a0;
+ (id)bottomTabTypeToTopTabType;
+ (id)p_generateTopEditStructWithTopTabList:(id)a0;
+ (id)p_generateXTabEditStructWithChannelInfo:(id)a0;

@end

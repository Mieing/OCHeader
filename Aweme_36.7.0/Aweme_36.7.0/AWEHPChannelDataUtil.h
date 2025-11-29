@interface AWEHPChannelDataUtil : NSObject

+ (id)getCurrentUserID;
+ (BOOL)simpleCheckBottomTab:(id)a0;
+ (BOOL)checkBottomTab:(id)a0 topTab:(id)a1 error:(id *)a2;
+ (id)getNotLoginUserID;
+ (id)topTabWithBottomTab:(id)a0;
+ (BOOL)shouldCheckTopTabWithBottomTab:(id)a0;
+ (id)getTabDataHashWithResponse:(id)a0;
+ (BOOL)checkNetworkResponse:(id)a0 topTab:(id)a1 error:(id *)a2;

@end

@interface BDMannorAdTaskManager : NSObject

+ (void)runTaskWith:(id)a0 logExtra:(id)a1;
+ (void)runAppStoreTaskWith:(id)a0 logExtra:(id)a1 adExtraData:(id)a2 refer:(id)a3 tag:(id)a4;
+ (void)runOpenWeChatTaskWith:(id)a0 logExtra:(id)a1 adExtraData:(id)a2 refer:(id)a3 tag:(id)a4;
+ (void)runWebURLTaskWith:(id)a0 logExtra:(id)a1 extra:(id)a2 adExtraData:(id)a3 refer:(id)a4 tag:(id)a5;
+ (BOOL)runOpenURLsWith:(id)a0 logExtra:(id)a1 extra:(id)a2 adExtraData:(id)a3 refer:(id)a4 tag:(id)a5;
+ (BOOL)runOpenECommerceWith:(id)a0 logExtra:(id)a1 extra:(id)a2 adExtraData:(id)a3 refer:(id)a4 tag:(id)a5;
+ (BOOL)runOpenLiveRoomWith:(id)a0 logExtra:(id)a1 extra:(id)a2 adExtraData:(id)a3 refer:(id)a4 tag:(id)a5;
+ (BOOL)runOpenIMWith:(id)a0 logExtra:(id)a1 extra:(id)a2 adExtraData:(id)a3 refer:(id)a4 tag:(id)a5;
+ (BOOL)runOpenInAppWith:(id)a0 logExtra:(id)a1 extra:(id)a2 adExtraData:(id)a3 refer:(id)a4 tag:(id)a5;
+ (void)runOpenURLTaskWith:(id)a0 logExtra:(id)a1 adExtraData:(id)a2 refer:(id)a3 tag:(id)a4;
+ (BOOL)runOpenMpURLWith:(id)a0 logExtra:(id)a1 extra:(id)a2 adExtraData:(id)a3 refer:(id)a4 tag:(id)a5;
+ (BOOL)runOpenLynxWith:(id)a0 logExtra:(id)a1 extra:(id)a2 adExtraData:(id)a3 refer:(id)a4 tag:(id)a5;
+ (void)runTaskWith:(id)a0 logExtra:(id)a1 adExtraData:(id)a2 refer:(id)a3 tag:(id)a4;
+ (void)processWithAdData:(id)a0 appID:(id)a1 preload:(BOOL)a2 creativeID:(id)a3 logExtra:(id)a4 tag:(id)a5 refer:(id)a6 adExtraData:(id)a7 downloadURL:(id)a8 appStoreEnabled:(BOOL)a9 SKANParams:(id)a10 downloadScene:(unsigned long long)a11 webURL:(id)a12 openURL:(id)a13 complianceData:(id)a14;
+ (void)runTaskWith:(id)a0 logExtra:(id)a1 adExtraData:(id)a2 refer:(id)a3 tag:(id)a4 enterLive:(id /* block */)a5;
+ (void)runAppStoreTaskWith:(id)a0 logExtra:(id)a1;
+ (void)processWithAppID:(id)a0 preload:(BOOL)a1 creativeID:(id)a2 logExtra:(id)a3 downloadURL:(id)a4 appStoreEnabled:(BOOL)a5 SKANParams:(id)a6 downloadScene:(unsigned long long)a7 webURL:(id)a8 openURL:(id)a9 complianceData:(id)a10;
+ (void)runOpenURLTaskWith:(id)a0 logExtra:(id)a1;
+ (void)runWebURLTaskWith:(id)a0 logExtra:(id)a1;

@end

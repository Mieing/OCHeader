@interface IESLivePrivilegePloyCenter : NSObject

+ (long long)privilege_lastNewStyleSelectStyleWithUserID:(id)a0 roomID:(id)a1;
+ (void)privilege_saveDanmakuNewStyleSelectTabWithStyle:(long long)a0 userID:(id)a1 roomID:(id)a2;
+ (id)privilege_entranceBarStrategyFreqData;
+ (void)privilege_saveEntranceBarStrategyFreqData:(id)a0;
+ (void)privilege_saveEntranceBarStrategyLocateData:(id)a0;
+ (BOOL)privilege_enableVIPEntranceWithAnchor:(id)a0;
+ (void)privilege_saveVIPEntranceWithAnchor:(id)a0 enableEntrance:(BOOL)a1;
+ (id)privilege_entranceBarStrategyLocateData;

@end

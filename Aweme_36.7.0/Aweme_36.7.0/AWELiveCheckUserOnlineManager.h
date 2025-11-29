@class AWELiveMgetRoomInfoApi, NSMutableDictionary;

@interface AWELiveCheckUserOnlineManager : NSObject

@property (retain, nonatomic) AWELiveMgetRoomInfoApi *infoApi;
@property (retain, nonatomic) NSMutableDictionary *monitorData;
@property (nonatomic) BOOL forceCheck;

+ (id)sharedManager;

- (id)_buildCurrenScene:(id)a0 referString:(id)a1;
- (id)_buildSceneUIDKey:(id)a0 userID:(id)a1;
- (void)addFeedReadyNotification;
- (void)p_postUnRead;
- (id)_getListByScene:(long long)a0;
- (void)_updateRoomInfo:(id)a0 toCenter:(id)a1;
- (id)_getNeedCheckUserList:(id)a0 toCenter:(id)a1;
- (id)_getRequestParams:(id)a0;
- (void)uploadMonitorEvent;
- (id)roomIdInResponse:(id)a0 ofUserId:(id)a1 andScene:(id)a2;
- (void)_callMessage:(id)a0 userList:(id)a1 updateCurrent:(BOOL)a2 feedModel:(id)a3;
- (void)_mgetRoomInfo:(id)a0 infoList:(id)a1 userList:(id)a2 inCenter:(id)a3 currentChange:(BOOL)a4;
- (id)_getMegetRequestParams:(id)a0;
- (void)checkRoomInfo:(id)a0 userID:(id)a1 scene:(long long)a2;
- (void)forceToCheckRoomInfo:(id)a0 userID:(id)a1 scene:(long long)a2;
- (void).cxx_destruct;
- (id)init;

@end

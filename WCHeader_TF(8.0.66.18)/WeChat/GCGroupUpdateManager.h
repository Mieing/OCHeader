@class GameLifeTabBarViewController, GetMyChatroomResponse, NSString, GCGroupServer;

@interface GCGroupUpdateManager : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) GCGroupServer *groupServer;
@property (nonatomic) int previousSceneType;
@property (weak, nonatomic) GameLifeTabBarViewController *willPushTabVc;
@property (retain, nonatomic) GetMyChatroomResponse *lastestRoomResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isVcTabBarVcAndSelectChatV2:(id)a0;
- (int)getSceneType;
- (int)innerGetSceneType;
- (void)triggerGroupStatusUpdate:(id)a0;
- (void)tabVcPushed:(id)a0;
- (void)onChatRoomResponseUpdate:(id)a0;
- (void)registerGroupUpdateExt:(id)a0;
- (void)endUpdate;
- (void).cxx_destruct;

@end

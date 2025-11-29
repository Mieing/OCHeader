@class IESLiveVipChatEntrance, IESLiveVipChatApi, NSString;
@protocol IESLiveURLSchemaHandler;

@interface IESLiveVipChatFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber, IESLiveVipChatRouter>

@property (nonatomic) BOOL hasUnreadImMessages;
@property (retain, nonatomic) IESLiveVipChatApi *api;
@property (retain, nonatomic) IESLiveVipChatEntrance *entrance;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) id<IESLiveURLSchemaHandler> schemaHandler;
@property (nonatomic) BOOL hasUpdatedRoomInfoAfterEnterRoom;
@property (nonatomic) BOOL hasPresentedVIPChat;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentUnmount;
- (void)remoteRoomDataReady:(id)a0;
- (void)trackerVipChatSchemaClicked;
- (void)dismissRedDot;
- (void)reloadMoreToolItem;
- (void)loadVipChatInMoreTool;
- (void)receivePopupNotification:(id)a0;
- (id)vipChatSchema;
- (void)showVipChatView;
- (void)vipChatPageOpened;
- (BOOL)isVipChatPagePresented;
- (void)requestChatEntranceIfNeeded;
- (void)addPopupDismissNotification;
- (void)requestChatEntrance;
- (void)showRedDot;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setup;
- (void)messageReceived:(id)a0;
- (BOOL)hasUnreadMessages;

@end

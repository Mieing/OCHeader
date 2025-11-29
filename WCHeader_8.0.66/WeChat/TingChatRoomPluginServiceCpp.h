@class NSString;

@interface TingChatRoomPluginServiceCpp : UnitRCObjcBaseProxyClass <TingChatRoomPluginService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getCurRoomCategoryId;
- (id)getCurRoomName;
- (id)getCurRoomCategoryItem;
- (void)createChatRoom:(id)a0 roomType:(int)a1 presetListenId:(id)a2 callback:(id /* block */)a3;
- (void)joinChatRoom:(id)a0 callback:(id /* block */)a1;
- (void)exitChatRoom:(id)a0;
- (void)updateChatRoom:(id)a0 isClose:(BOOL)a1 genPlaylistOnClosing:(BOOL)a2 callback:(id /* block */)a3;
- (id)getRoomChatMessageList;
- (unsigned int)getRoomMemberCount;
- (void)sendRoomMsg:(id)a0 categoryId:(id)a1 callback:(id /* block */)a2;
- (void)addRoomListener:(id)a0;
- (void)removeRoomListener:(id)a0;
- (id)getRoomRecommendPlayList;
- (BOOL)hasShownCheerMessage:(id)a0;
- (void)onShowCheerMessage:(id)a0;
- (id)getRoomRecommendPlayTaskService;
- (void)savePrivateSessionInfo:(id)a0;
- (id)getPrivateSessionInfo;
- (id)getEncryptedUserInfo;
- (void)setChatRoomPluginServiceListener:(id)a0;
- (BOOL)getIsPlayingHistory;
- (void)setIsPlayingHistory:(BOOL)a0;
- (void)getChatRoomInfo:(id)a0 callback:(id /* block */)a1;

@end

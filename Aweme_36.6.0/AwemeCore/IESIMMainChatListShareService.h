@class NSString;

@interface IESIMMainChatListShareService : HTSService <IESIMMainChatListShareService>

@property (readonly, nonatomic) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)shareModelListWithConfig:(id /* block */)a0;
- (void)fetchShareModelListAfterChatListReadyWithConfig:(id /* block */)a0 completion:(id /* block */)a1;
- (id)userListWithConfig:(id /* block */)a0;
- (id)p_userListWithLimit:(long long)a0 skipNotFriends:(BOOL)a1;
- (id)p_shareModelListWithLimit:(long long)a0 skipNotFriends:(BOOL)a1 skipGroupChat:(BOOL)a2 includeFoldBox:(BOOL)a3 insertRecommend:(BOOL)a4;
- (id)p_allChatsFromMainDataSource;
- (BOOL)p_checkChatCanShare:(id)a0 withSkipNotFriends:(BOOL)a1 skipGroupChat:(BOOL)a2;
- (id)p_filterAndReorderShareModelList:(id)a0 withLimit:(long long)a1;

@end

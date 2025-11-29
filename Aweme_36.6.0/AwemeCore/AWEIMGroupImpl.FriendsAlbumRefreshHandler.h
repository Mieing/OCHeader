@interface AWEIMGroupImpl.FriendsAlbumRefreshHandler : AWEIMMsgBaseRefreshHandler {
    void /* unknown type, empty encoding */ _friendsAlbumService;
}

+ (BOOL)supportRefresh;

- (BOOL)supportRefreshMessage:(id)a0;
- (BOOL)supportRefreshStrategy:(unsigned long long)a0;
- (void)refrshResourceStateFor:(id)a0 forViewModels:(id)a1 strategy:(unsigned long long)a2;
- (id)initWithComponentCenter:(id)a0;
- (id)initWithConversationContext:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

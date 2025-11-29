@class NSString, NSHashTable;

@interface LunaModelsManager : HTSService <LunaModelsManagerProtocol>

@property (retain, nonatomic) NSHashTable *musicList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addMusicModel:(id)a0;
- (void)commentTotalCountNotification:(id)a0;
- (void)commentAddNotification:(id)a0;
- (void)commentDeleteCountNotification:(id)a0;
- (void)updateCommentTotalCount:(id)a0 increase:(long long)a1 model:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setup;

@end

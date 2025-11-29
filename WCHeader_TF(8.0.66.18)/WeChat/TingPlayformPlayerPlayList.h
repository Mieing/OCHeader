@class NSString;
@protocol TingPlayListListener, TingPlayTaskClient;

@interface TingPlayformPlayerPlayList : NSObject <TingPlayTaskClient, ITingPlatformPlayList>

@property (weak, nonatomic) id<TingPlayListListener> listListener;
@property (retain, nonatomic) id<TingPlayTaskClient> weakProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hasPlayingPlayList;
+ (id)taskService;

- (void)loadMore;
- (BOOL)hasMore;
- (id)getItems;
- (void)dealloc;
- (void)applyListListener:(id)a0;
- (void)onReloadItems:(id)a0;
- (void)onLoadMoreWithDirection:(id)a0 direction:(int)a1;
- (void)onLoad:(id)a0;
- (void)onLoadMore:(id)a0;
- (void)onUpdate:(int)a0 item:(id)a1;
- (void)onPlayTaskServiceTingItemUpdated:(id)a0 newItem:(id)a1;
- (void)onPlayTaskServiceTapeItemUpdated:(id)a0;
- (void)onListMd5Changed:(id)a0 newMd5:(id)a1;
- (void)onPreloadDone:(unsigned long long)a0;
- (void)onPlayTaskServiceRefresh:(id)a0;
- (void).cxx_destruct;

@end

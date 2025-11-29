@class NSString, TingTapeItem;
@protocol TingPlayListListener, TingPlayTaskClient, TingPlayTaskService;

@interface TingPlatformPlayList : NSObject <TingPlayTaskClient, ITingPlatformPlayList>

@property (retain, nonatomic) TingTapeItem *tapeItem;
@property (retain, nonatomic) id<TingPlayTaskService> taskService;
@property (weak, nonatomic) id<TingPlayListListener> listListener;
@property (retain, nonatomic) id<TingPlayTaskClient> weakProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTapeItem:(id)a0 scene:(int)a1;
- (id)initWithTapeItem:(id)a0 scene:(int)a1 config:(id)a2;
- (void)dealloc;
- (void)applyListListener:(id)a0;
- (void)loadMore;
- (BOOL)hasMore;
- (id)getItems;
- (void)onReloadItems:(id)a0;
- (void)onLoadMoreWithDirection:(id)a0 direction:(int)a1;
- (void)onLoad:(id)a0;
- (void)onLoadMore:(id)a0;
- (void)onUpdate:(int)a0 item:(id)a1;
- (void)onPlayTaskServiceTingItemUpdated:(id)a0 newItem:(id)a1;
- (void)onPlayTaskServiceTapeItemUpdated:(id)a0;
- (void)onListMd5Changed:(id)a0 newMd5:(id)a1;
- (void)onPreloadDone:(unsigned long long)a0;
- (void).cxx_destruct;

@end

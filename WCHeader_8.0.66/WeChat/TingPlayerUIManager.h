@class NSString, TingItem;

@interface TingPlayerUIManager : NSObject <TingFlowPlayerNotification>

@property (retain, nonatomic) TingItem *autoResumeFailItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)markAutoResumeFailItem:(id)a0;
- (void)flowPlayer:(id)a0 onPlayingItemReplaced:(id)a1;
- (void)flowPlayer:(id)a0 onItemLoaded:(id)a1;
- (void)applicationDidBecomeActive;
- (void).cxx_destruct;

@end

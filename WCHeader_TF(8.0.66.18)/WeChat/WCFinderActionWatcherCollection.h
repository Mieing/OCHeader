@class NSMapTable;

@interface WCFinderActionWatcherCollection : NSObject

@property (retain, nonatomic) NSMapTable *owner2watcherSet;
@property (retain, nonatomic) NSMapTable *watcher2owner;
@property (nonatomic) SEL selector;

- (id)initWithSelector:(SEL)a0;
- (void)removeAllWatcher:(id)a0;
- (void)removeWatcher:(id)a0;
- (void)addWatcher:(id)a0 owner:(id)a1;
- (void)notifyArgCnt:(long long)a0 args:(id)a1;
- (void)notify:(id)a0 arg:(id)a1 arg0:(char *)a2;
- (void)notify:(id)a0 arg:(id)a1 arg1:(char *)a2;
- (void)notify:(id)a0 arg:(id)a1 arg2:(char *)a2;
- (void).cxx_destruct;

@end

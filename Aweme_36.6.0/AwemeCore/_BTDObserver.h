@class NSMutableArray;

@interface _BTDObserver : NSObject {
    BOOL _isObserving;
}

@property (readonly, nonatomic) id observee;
@property (readonly, nonatomic) NSMutableArray *keyPaths;
@property (readonly, nonatomic) id task;
@property (readonly, nonatomic) int context;

- (void)_stopObservingLocked;
- (id)initWithObservee:(id)a0 keyPaths:(id)a1 context:(int)a2 task:(id)a3;
- (void).cxx_destruct;
- (void)stopObserving;
- (void)startObservingWithOptions:(unsigned long long)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)stopObservingKeyPath:(id)a0;

@end

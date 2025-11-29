@class LynxEventEmitter, NSMutableDictionary, NSTimer, LynxUICollection;

@interface LynxListAppearEventEmitter : NSObject {
    NSMutableDictionary *_flushingEvent;
    NSMutableDictionary *_pendingEvent;
    NSTimer *_timer;
    LynxUICollection *_listUI;
}

@property (readonly, nonatomic) LynxEventEmitter *emitter;

- (id)initWithEmitter:(id)a0;
- (void)setListUI:(id)a0;
- (void)onCellDisappear:(id)a0 atIndexPath:(id)a1;
- (void)onCellAppear:(id)a0 atIndexPath:(id)a1;
- (id)eventKeyForUI:(id)a0 atIndexPath:(id)a1;
- (id)eventWithName:(id)a0 ui:(id)a1 key:(id)a2 position:(long long)a3;
- (void)flush;
- (void).cxx_destruct;
- (void)invalidate;
- (void)startTimerIfNeeded;

@end

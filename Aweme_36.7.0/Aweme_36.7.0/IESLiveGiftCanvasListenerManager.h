@class NSObject, NSMutableDictionary, LynxView;
@protocol OS_dispatch_queue;

@interface IESLiveGiftCanvasListenerManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *streamListeners;
@property (nonatomic) double containerCreationTime;
@property (weak, nonatomic) LynxView *lynxView;
@property (nonatomic) double pendingFinishLoadTime;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *listenersQueue;
@property BOOL listening;

- (void)setContainerFinishLoadTime:(double)a0;
- (id)initWithCreationTime:(double)a0;
- (void)startListenWithLynxView:(id)a0;
- (void)stopListen:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end

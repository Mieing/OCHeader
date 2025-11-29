@class TSPKDetectEvent, TSPKContext;
@protocol TSPKDetectTaskProtocol;

@interface TSPKDetectTask : NSObject

@property (retain, nonatomic) TSPKDetectEvent *detectEvent;
@property (nonatomic) BOOL onCurrentThread;
@property (retain, nonatomic) TSPKContext *context;
@property (weak, nonatomic) id<TSPKDetectTaskProtocol> delegate;

- (void)markTaskFinish;
- (void)decodeParams:(id)a0;
- (id)initWithDetectEvent:(id)a0;
- (void).cxx_destruct;
- (void)execute;
- (void)setup;

@end

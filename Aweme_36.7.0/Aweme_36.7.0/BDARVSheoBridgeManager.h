@class NSArray;
@protocol BDARVSheoBridgeContext;

@interface BDARVSheoBridgeManager : NSObject

@property (weak, nonatomic) id<BDARVSheoBridgeContext> context;
@property (copy, nonatomic) NSArray *sheoBridgeMethod;

- (id)initWithParam:(id)a0;
- (void)resolveActionWithParams:(id)a0 payloadData:(id)a1;
- (void)trackv3:(id)a0;
- (void)enterLive:(id)a0;
- (void)sendMonitor:(id)a0;
- (id)findLiveViewWithView:(id)a0;
- (void).cxx_destruct;
- (void)remove;
- (void)track:(id)a0;

@end

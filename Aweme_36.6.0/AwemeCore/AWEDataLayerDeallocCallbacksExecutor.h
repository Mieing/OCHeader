@class NSMutableArray;

@interface AWEDataLayerDeallocCallbacksExecutor : NSObject

@property (retain, nonatomic) NSMutableArray *callbacks;

- (void).cxx_destruct;
- (id)init;
- (void)addCallback:(id /* block */)a0;
- (void)dealloc;

@end

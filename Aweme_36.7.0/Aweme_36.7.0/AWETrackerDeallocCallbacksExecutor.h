@class NSMutableArray;

@interface AWETrackerDeallocCallbacksExecutor : NSObject

@property (retain, nonatomic) NSMutableArray *callbacks;

+ (void)addTrackerDeallocCallbackTo:(id)a0 with:(id /* block */)a1;

- (void).cxx_destruct;
- (id)init;
- (void)addCallback:(id /* block */)a0;
- (void)dealloc;

@end

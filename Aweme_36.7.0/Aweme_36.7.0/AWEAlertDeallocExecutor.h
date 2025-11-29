@class NSMutableArray;

@interface AWEAlertDeallocExecutor : NSObject

@property (retain, nonatomic) NSMutableArray *callbacks;

+ (void)addDeallocCallbackWithHost:(id)a0 callback:(id /* block */)a1;

- (void).cxx_destruct;
- (id)init;
- (void)addCallback:(id /* block */)a0;
- (void)dealloc;

@end

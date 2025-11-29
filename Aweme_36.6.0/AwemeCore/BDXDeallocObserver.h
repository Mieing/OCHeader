@class NSMutableArray;

@interface BDXDeallocObserver : NSObject

@property (retain, nonatomic) NSMutableArray *observers;

- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)init;
- (void)removeObserver:(id)a0;
- (void)dealloc;

@end

@class NSMutableArray;

@interface AWEEcomSearchFIFOQueue : NSObject

@property (nonatomic) long long capacity;
@property (retain, nonatomic) NSMutableArray *innerArray;

- (void)addObject:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)removeAllObjects;

@end

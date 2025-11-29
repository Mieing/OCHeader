@class NSMutableArray;

@interface DolphinContextItem : NSObject

@property (retain, nonatomic) NSMutableArray *handlers;

- (void)postValue:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)removeHandler:(id /* block */)a0;
- (void)addHandler:(id /* block */)a0;

@end

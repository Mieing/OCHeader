@interface AmoebaDeallocHelper : NSObject

@property (copy, nonatomic) id /* block */ callback;
@property (nonatomic) id target;

+ (BOOL)exist:(id)a0 forKey:(const void *)a1;
+ (void)attachToObject:(id)a0 key:(const void *)a1 whenDeallocDoThis:(id /* block */)a2;
+ (void)DettachObject:(id)a0 key:(const void *)a1;

- (void)dealloc;
- (void).cxx_destruct;

@end

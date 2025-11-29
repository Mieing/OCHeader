@interface ACCDeallocHelper : NSObject

@property (copy, nonatomic) id /* block */ callback;
@property (nonatomic) id target;

+ (void)attachToObject:(id)a0 key:(const void *)a1 whenDeallocDoThis:(id /* block */)a2;
+ (void)dettachObject:(id)a0 key:(const void *)a1;

- (void).cxx_destruct;
- (void)dealloc;

@end

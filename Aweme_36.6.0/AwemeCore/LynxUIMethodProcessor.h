@interface LynxUIMethodProcessor : NSObject

+ (id /* block */)findUIOperationByComponent:(Class)a0 andKey:(id)a1;
+ (void)extractUIOperationFromComponent:(Class)a0 withName:(id)a1;
+ (void)invokeMethod:(id)a0 withParams:(id)a1 withResult:(id /* block */)a2 forUI:(id)a3;

@end

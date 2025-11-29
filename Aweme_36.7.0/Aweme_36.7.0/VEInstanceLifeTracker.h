@interface VEInstanceLifeTracker : NSObject

+ (id)getInstanceOfClass:(Class)a0 address:(void *)a1;
+ (id)keyForBridgedPointer:(void *)a0;
+ (id)p_trackerQueue;
+ (void)recordInstanceCreation:(id)a0;
+ (void)recordInstanceDestruction:(id)a0;

@end

@interface IESIMThreadPriorityInversion : NSObject

+ (void)lockSemaphore:(id)a0 mutex:(struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } *)a1;
+ (void)unlockSemaphore:(id)a0 mutex:(struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } *)a1;

@end

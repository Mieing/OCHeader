@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface AWEIMWebImageTransformManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *transformDictionary;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;

+ (void)cacheTransform:(id)a0 key:(id)a1;
+ (id)transformWithKey:(id)a0;
+ (id)sharedInstance;

- (void)cacheTransform:(id)a0 key:(id)a1;
- (id)transformWithKey:(id)a0;
- (void).cxx_destruct;

@end

@class NSMutableSet;

@interface AWEIMUserLoginTaskManager : NSObject

@property (retain, nonatomic) NSMutableSet *taskSet;

+ (id)taskObserver;
+ (void)markFinishWithTaskObserver:(id)a0;
+ (id)sharedCache;

- (void).cxx_destruct;

@end

@interface AWEIMMessageBaseReferCountMonitor : NSObject

@property (nonatomic) long long referenceCount;

+ (id)sharedInstance;

- (BOOL)isExistAliveMessageBaseVC;
- (void)referenceCountSub;
- (void)referenceCountAdd;

@end

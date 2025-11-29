@class NSString, NSRecursiveLock;

@interface TPRecursiveLock : NSObject <ITPLock>

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)unlock;
- (void).cxx_destruct;

@end

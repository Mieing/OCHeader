@class NSObject, NSString, NSHashTable;
@protocol OS_dispatch_semaphore;

@interface IESLiveLGameLifeCycleService : NSObject <IESLiveLGameLifeCycleServiceInterface>

@property (retain, nonatomic) NSHashTable *delegateArr;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *delegateLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

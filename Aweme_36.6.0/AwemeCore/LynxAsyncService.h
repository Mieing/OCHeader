@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface LynxAsyncService : NSObject <LynxServiceAsyncProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *defaultQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (unsigned long long)serviceType;

- (id)generateLynxAsyncManager:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end

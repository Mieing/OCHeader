@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface RTVTrackerIMP : NSObject <RTVTrackerProtocol>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *trackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)event:(id)a0 params:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end

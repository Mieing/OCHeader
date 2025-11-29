@class NSString, IESECommerceServiceProvider, IESECPDPState, NSObject;
@protocol OS_dispatch_semaphore;

@interface IESECPDPActionDispatcher : NSObject <IESECPDPActionDispatcherService>

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (retain, nonatomic) IESECPDPState *state;
@property (weak, nonatomic) IESECommerceServiceProvider *provider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

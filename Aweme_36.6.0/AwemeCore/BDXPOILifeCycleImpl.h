@class NSString;
@protocol BDXContainerProtocol;

@interface BDXPOILifeCycleImpl : NSObject <BDXContainerLifecycleProtocol>

@property (weak, nonatomic) id<BDXContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createServiceWithURL:(id)a0;

- (void)containerDidStartLoading:(id)a0;
- (void).cxx_destruct;

@end

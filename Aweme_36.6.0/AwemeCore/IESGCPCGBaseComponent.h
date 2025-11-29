@class NSString;

@interface IESGCPCGBaseComponent : NSObject <IESGCPDIContextSubscriber>

@property (readonly, nonatomic) BOOL isInstanceDeallocating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDestroy;
- (void)didSetGameCPDIContext;
- (id)serviceBindingProtocols;
- (id)multiBindingProtocols;
- (void)componentDidAttached;
- (void)_doNotImplComponentDestroy;

@end

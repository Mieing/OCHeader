@class NSString;

@interface IESGCPLivePreStreamContainerInterfaceProvider : NSObject <IESGCPLivePreStreamContainerInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadWidgetsWithDIContext:(id)a0;
- (void)createLivePreStreamContainerWithDIContext:(id)a0;
- (void)destroyLivePreStreamContainerWithDIContext:(id)a0;

@end

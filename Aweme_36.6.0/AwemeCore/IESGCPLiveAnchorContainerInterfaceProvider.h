@class NSString;

@interface IESGCPLiveAnchorContainerInterfaceProvider : NSObject <IESGCPLiveAnchorContainerInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)createLiveAnchorContainerWithDIContext:(id)a0;
- (void)destroyLiveAnchorContainerWithDIContext:(id)a0;
- (void)loadWidgetsWithDIContext:(id)a0;

@end

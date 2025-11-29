@class NSString;

@interface IESGCPLiveAudienceContainerInterfaceProvider : NSObject <IESGCPLiveAudienceContainerInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadWidgetsWithDIContext:(id)a0;
- (void)createLiveAudienceContainerWithDIContext:(id)a0;
- (void)destroyLiveAudienceContainerWithDIContext:(id)a0;

@end

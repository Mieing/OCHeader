@class NSString, WCFinderCreateCoordinator;

@interface WAJSEventHandler_openChannelsCreateContact : WAJSEventHandler_BaseEvent <WCFinderCreateCoordinatorDelegate>

@property (retain, nonatomic) WCFinderCreateCoordinator *createCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)finderCreateCoordinatorStartCreateUserComplete;
- (void).cxx_destruct;

@end

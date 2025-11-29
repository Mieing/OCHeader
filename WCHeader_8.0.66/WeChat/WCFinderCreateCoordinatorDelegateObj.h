@class NSString, WCFinderCreateCoordinator;

@interface WCFinderCreateCoordinatorDelegateObj : NSObject <WCFinderCreateCoordinatorDelegate>

@property (weak, nonatomic) id delegateHost;
@property (retain, nonatomic) WCFinderCreateCoordinator *createCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bindDelegateObjWithHost:(id)a0;

@end

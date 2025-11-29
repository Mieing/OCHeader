@class AWEGrouponPinTopManager, NSString;

@interface AWEGrouponPinTopPlugin : AWEGrouponFeedBasePlugin <AWENearbyContainerEventMessage>

@property (retain, nonatomic) AWEGrouponPinTopManager *pinTopManager;
@property (nonatomic) BOOL isCreatedPinTopManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPageContext:(id)a0;
- (void)nearbyDidEnterTab;
- (void)registerC2EventMessage;
- (void)tryCreatePinTopManager;
- (void).cxx_destruct;
- (void)dealloc;

@end

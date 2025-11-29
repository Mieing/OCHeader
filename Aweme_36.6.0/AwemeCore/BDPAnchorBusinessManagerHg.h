@class NSMapTable, NSString, BDPAnchorConfig_HG, BDPUniqueID;

@interface BDPAnchorBusinessManagerHg : NSObject <BDPShareBusinessHandler_HG, BDPAnchorBusinessMessage_HG, BDPContainerLifeCycleMessage>

@property (weak, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) NSMapTable *buttonMaps;
@property (retain, nonatomic) BDPAnchorConfig_HG *anchorConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (id)sharedManager;

- (void)viewDidLoad:(id)a0 uniqueID:(id)a1;
- (void)viewWillDisappear:(id)a0 uniqueID:(id)a1;
- (void)handleShareBussinessForChannel:(id)a0 withParams:(id)a1 uniqueID:(id)a2 callback:(id /* block */)a3;
- (void)showAnchorShareButtonWithController:(id)a0;
- (void)showAnchorShareButtonWithController:(id)a0 withUniqueID:(id)a1;
- (void)anchorShareButtonDidClick:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

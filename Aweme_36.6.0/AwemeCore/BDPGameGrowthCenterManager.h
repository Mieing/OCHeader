@class BDPGameGrowthCenterEntranceInfo, NSString, BGPGameGrowthCenterCapsuleEntranceView, BDPUniqueID;

@interface BDPGameGrowthCenterManager : NSObject <BDPBootLifeCycleMessage, BDPAppInterfaceOrientationChangeMessage>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) id /* block */ delayAction;
@property (retain, nonatomic) BGPGameGrowthCenterCapsuleEntranceView *capsuleEntrance;
@property (retain, nonatomic) BDPGameGrowthCenterEntranceInfo *entranceInfo;
@property (readonly, nonatomic) BOOL canShowMorePanelEntrance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackWithEvent:(id)a0;
- (void)applicationFirstFrameDidShow:(id)a0;
- (void)applicationSCFirstFrameDidShow:(id)a0;
- (void)interfaceOrientationChange:(id)a0 targetOrientation:(long long)a1 uniqueID:(id)a2;
- (void)firstFrameReached;
- (void)fetchGrowthCenterInfo;
- (void)onClickCapsuleEntrance:(id)a0;
- (id)buildGrowthCenterURL;
- (id)makeCapsuleEntrance;
- (id)makeMorePanelEntranceView;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithUniqueID:(id)a0;

@end

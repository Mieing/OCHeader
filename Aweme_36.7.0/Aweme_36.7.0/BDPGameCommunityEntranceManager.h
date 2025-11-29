@class BDPCommunityItemModel, BDPGameCommunityEntrance, NSString, BDPUniqueID, BDPCommunityEntranceSettingsModel;

@interface BDPGameCommunityEntranceManager : NSObject <BDPGameCommunityEntranceDelegate, BDPBootLifeCycleMessage, BDPAppInterfaceOrientationChangeMessage>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPCommunityEntranceSettingsModel *settings;
@property (retain, nonatomic) BDPCommunityItemModel *communityItem;
@property (copy, nonatomic) id /* block */ delayAction;
@property (retain, nonatomic) BDPGameCommunityEntrance *entranceButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackWithEvent:(id)a0;
- (void)applicationFirstFrameDidShow:(id)a0;
- (void)applicationSCFirstFrameDidShow:(id)a0;
- (void)applicationWarmBootDoneWithUniqueID:(id)a0;
- (void)interfaceOrientationChange:(id)a0 targetOrientation:(long long)a1 uniqueID:(id)a2;
- (void)firstFrameReached;
- (void)onClickEntranceButton;
- (void)initEntrance;
- (void)getEntranceImageWithTheme:(long long)a0 completion:(id /* block */)a1;
- (id)buildCommunityURL;
- (BOOL)shouldShowXScreenButton;
- (void)fetchCommunityInfo;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithUniqueID:(id)a0;

@end

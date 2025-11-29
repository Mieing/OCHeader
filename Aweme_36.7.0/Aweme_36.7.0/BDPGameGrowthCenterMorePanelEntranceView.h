@class NSString, BDPUniqueID, UIView;
@protocol AnnieXContainerBaseProtocol;

@interface BDPGameGrowthCenterMorePanelEntranceView : UIView <IESHYHybridViewLifecycleProtocol, BDXContainerLifecycleProtocol>

@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *lynxView;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSchema:(id)a0 uniqueID:(id)a1;
- (void)setupLynx:(id)a0;
- (void).cxx_destruct;

@end

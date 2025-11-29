@class NSArray, IESLiveGiftPanelDataSharing, NSString, IESLiveGiftPrivilegeEntranceBarSectionViewModel, IESLiveAioLinkGiftFansClubServiceImpl;
@protocol IESLiveGiftDynamicPanelOperationViewModelDelegate, IESLiveGiftModuleRecipientRouter;

@interface IESLiveGiftDynamicPanelOperationViewModel : NSObject <IESLiveRefactGiftPanelEventAction>

@property (retain, nonatomic) IESLiveGiftPanelDataSharing *giftPanelDataSharing;
@property (weak, nonatomic) id<IESLiveGiftModuleRecipientRouter> recipientRouter;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) IESLiveGiftPrivilegeEntranceBarSectionViewModel *privilegeVM;
@property (retain, nonatomic) IESLiveAioLinkGiftFansClubServiceImpl *fansClubServiceImpl;
@property (nonatomic) BOOL fixDefaultSelectGift;
@property (nonatomic) BOOL enableSingleLynx;
@property (nonatomic) BOOL enableRPCRefactor;
@property (weak, nonatomic) id<IESLiveGiftDynamicPanelOperationViewModelDelegate> delegate;
@property (nonatomic) BOOL liveGiftPanelNewArchitecture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)registerService;
- (id)lynxData;
- (void)updatePanelDataSharing:(id)a0;
- (id)initWithGiftPanelDataSharing:(id)a0;
- (id)createPrivilegeSectionView;
- (void)removePrivilegeSectionView;
- (void)initDynamicPanelDataStore;
- (id)dynamicPanelDataRPCClass;
- (id)recipientData;
- (id)relatedGifts;
- (id)seriesGifts;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)settings;

@end

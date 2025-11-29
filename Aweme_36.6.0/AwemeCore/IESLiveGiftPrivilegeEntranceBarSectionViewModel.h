@class NSString, IESLiveGiftPanelDataSharing;
@protocol IESLiveGiftModuleRecipientRouter;

@interface IESLiveGiftPrivilegeEntranceBarSectionViewModel : IESLiveRefactGiftPanelSectionViewModel <IESLivePrivilegeEntranceBarActions>

@property (retain, nonatomic) IESLiveGiftPanelDataSharing *giftPanelDataSharing;
@property (retain, nonatomic) id<IESLiveGiftModuleRecipientRouter> recipientRouter;
@property (readonly, nonatomic) BOOL enable;
@property (nonatomic) BOOL liveGiftPanelNewArchitecture;
@property (nonatomic) BOOL liveGiftEnablePanelDynamic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)p_bindAction;
- (id)createSectionView;
- (id)initWithGiftPanelDataSharing:(id)a0;
- (void)handleSectionWillDisappear;
- (void)entranceBarDidUpdated;
- (void).cxx_destruct;

@end

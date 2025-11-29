@class NSString, IESLiveGiftPanelDataSharing;
@protocol IESLiveGiftModuleRecipientRouter;

@interface IESLiveGiftMarketAreaSectionViewModel : IESLiveRefactGiftPanelSectionViewModel <IESLiveRefactGiftPanelEventAction>

@property (retain, nonatomic) IESLiveGiftPanelDataSharing *giftPanelDataSharing;
@property (weak, nonatomic) id<IESLiveGiftModuleRecipientRouter> recipientRouter;
@property (copy, nonatomic) id /* block */ marketModelChanged;
@property (nonatomic) BOOL marketingAreaDisplaying;
@property (nonatomic) BOOL liveGiftPanelNewArchitecture;
@property (nonatomic) BOOL annieXCardEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)gpe_didGiftExtraInfoUpdate:(id)a0;
- (id)lynxData;
- (void)bindAction;
- (id)createSectionView;
- (id)initWithGiftPanelDataSharing:(id)a0;
- (id)generateModelWithGiftItem:(id)a0;
- (id)generateCurrentGiftMarketAreaModel;
- (void)p_updateGiftMarketingInfoWithGiftItem:(id)a0;
- (void).cxx_destruct;

@end

@class NSString, ACCGroupedPredicate;
@protocol ACCEditServiceProtocol, ACCSequenceEditServiceProtocol;

@interface ACCAIImageToLiveEditViewModel : ACCEditViewModel <ACCSequenceEditServicePlayerSubscriber, ACCAIImageToLiveEditServiceProtocol>

@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (nonatomic) BOOL needBindLiveViewModelSignal;
@property (nonatomic) BOOL isSendNoticeSignal;
@property (nonatomic) BOOL isClickedBackSignal;
@property (nonatomic) BOOL isStartPublishSignal;
@property (nonatomic) BOOL isSaveDraftSignal;
@property (nonatomic) BOOL closeEditPageSignal;
@property (nonatomic) BOOL isNeedFilterImageTempletSignal;
@property (nonatomic) BOOL isNeedRemoveTempletSignal;
@property (retain, nonatomic) ACCGroupedPredicate *didCurrentUsePropSupportAILive;
@property (retain, nonatomic) id lastUsePropModel;
@property (nonatomic) BOOL isNeedRemoveUserActionSignal;
@property (nonatomic) BOOL isApplyingAIGCTempletSignal;
@property (nonatomic) BOOL isNeedReApplyTempletSignal;
@property (nonatomic) BOOL isNeedRecoverRemovedMusic;
@property (nonatomic) BOOL isSideslipPropPanelLoad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isMusicPanelOpen;
@property (nonatomic) BOOL isSharePanelOpen;
@property (nonatomic) BOOL isSaveLocalPanelOpen;
@property (nonatomic) BOOL isTextPanelOpen;
@property (nonatomic) BOOL isQuickFlashPanelOpen;
@property (nonatomic) BOOL isTagPanelOpen;
@property (nonatomic) BOOL isStickerPanelOpen;
@property (nonatomic) BOOL isStickerInEditing;
@property (nonatomic) BOOL isFilterPanelOpen;
@property (nonatomic) BOOL isSideslipPropPanelPanelOpen;
@property (nonatomic) BOOL isComponentShowing;
@property (nonatomic) BOOL isHasOtherShowing;
@property (nonatomic) BOOL isAllPanelClosed;

- (void)handleApplicationDidBecomeActiveNotification;
- (BOOL)checkPanelState;
- (BOOL)isNeedShowCustomBackAlert;
- (BOOL)isFromTaskDraft;
- (void)sendBackWithIsSendNoticeSignal:(BOOL)a0;
- (void)sendClickedBackWithSignal:(BOOL)a0;
- (void)sendStartPublishWithSignal:(BOOL)a0;
- (void)sendSaveDraftSignal:(BOOL)a0;
- (void)sendCloseEditPageSignal;
- (void)sendNeedFilterTempletSignal;
- (void)sendNeedRemoveTempletSignal;
- (void)markLastUsePropCellModel:(id)a0;
- (void)sendNeedRemoveUserActionSignal;
- (void)sendIsApplyingAIGCTempletSignal;
- (void)sendNeedReApplyTempletSignal;
- (void)sendNeedRecoverRemovedMusic;
- (void)sendSideslipPropPanelLoad;
- (void)sendImageToLiveUpdateTrackSignal;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;
- (void)dealloc;

@end

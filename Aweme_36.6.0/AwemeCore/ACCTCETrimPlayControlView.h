@class NSString, UIImageView, UILabel, UIView, UIButton;
@protocol ACCAdvanceEditMainTrackActionServiceProtocol, ACCTrimCropSequencePieceServiceProtocol, IESServiceProvider, ACCTCETrimAdjustEditServiceProtocol, ACCTrimCropPieceProtocol, ACCTrimCropEditorFlagProtocol, ACCTCETrackEventServiceProtocol;

@interface ACCTCETrimPlayControlView : UIView <ACCEditPreviewMessageProtocol, ACCAdvanceEditMainTrackActionDelegate, ACCTCETrimAdjustEditActionDelegate, ACCTrimCropSequencePieceServiceListener, ACCTrimPlayControlService>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCTrimCropSequencePieceServiceProtocol> sequencePieceService;
@property (weak, nonatomic) id<ACCTrimCropPieceProtocol> piece;
@property (weak, nonatomic) id<ACCAdvanceEditMainTrackActionServiceProtocol> mainTrackActionService;
@property (weak, nonatomic) id<ACCTCETrimAdjustEditServiceProtocol> adjustEditService;
@property (weak, nonatomic) id<ACCTCETrackEventServiceProtocol> trackEventService;
@property (weak, nonatomic) id<ACCTrimCropEditorFlagProtocol> editorFlagService;
@property (retain, nonatomic) UIButton *playButton;
@property (retain, nonatomic) UILabel *currentTimeLabel;
@property (retain, nonatomic) UILabel *timeSplitLabel;
@property (retain, nonatomic) UILabel *totalDuration;
@property (retain, nonatomic) UIView *timeLabel;
@property (retain, nonatomic) UIView *backToAllMaterialView;
@property (retain, nonatomic) UIImageView *backToAllIcon;
@property (retain, nonatomic) UILabel *backToAllLabel;
@property (nonatomic) BOOL isForVideoClipRangePanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playerCurrentPlayTimeChanged:(double)a0;
- (void)setupObserver;
- (void)mainTrackDidExtendByUser;
- (void)mainTrackDidStoreByUser;
- (void)mainTrackLongPressGestureBegin;
- (void)mainTrackLongPressGestureEnd;
- (void)trimClipTimeRangeByUser;
- (void)sequencePieceService:(id)a0 didTransferToIndex:(long long)a1 isAutoTransfer:(BOOL)a2;
- (void)removeObserverForTrim;
- (void)setupObserverForTrim;
- (void)adjustClipRangePanelShow;
- (void)adjustClipRangePanelDismiss;
- (void)updateTimeLabelInfo;
- (void)playButtonClickAction:(id)a0;
- (void)backToAllClick:(id)a0;
- (void)changePlayButtonSelectedStatus:(id)a0;
- (void)trackEventPlayWith:(BOOL)a0;
- (void)trackEventBackToAll;
- (void)updateTimeLabelInfoForTrimSlotIndex:(long long)a0 showSourceDuration:(BOOL)a1;
- (void)switchTrimPlayerStatus;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;
- (void)setupUI;

@end

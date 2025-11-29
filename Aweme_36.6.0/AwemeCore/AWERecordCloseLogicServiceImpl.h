@class RACSignal, NSString, RACSubject;
@protocol ACCEditStickerServiceImplProtocol, ACCGlobalStickerServiceProtocol, IESServiceProvider, ACCStickerServiceProtocol, ACCRecorderStickerServiceProtocol, AWERecordFlowSourceService;

@interface AWERecordCloseLogicServiceImpl : NSObject <ACCRecordFlowServiceSubscriber, FPDependentInitable, AWERecordCloseLogicService>

@property (retain, nonatomic) id<IESServiceProvider> serviceProvider;
@property (nonatomic) BOOL closeViewForbidInteraction;
@property (nonatomic) BOOL createNewRecorder;
@property (nonatomic) BOOL dismissViewController;
@property (retain, nonatomic) RACSubject *manullyClickCloseButtonSuccessfullyCloseSubject;
@property (retain, nonatomic) RACSignal *manullyClickCloseButtonSuccessfullyCloseSignal;
@property (weak, nonatomic) id<ACCGlobalStickerServiceProtocol> globalStickerService;
@property (weak, nonatomic) id<ACCEditStickerServiceImplProtocol> stickerImplService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCRecorderStickerServiceProtocol> recorderStickerService;
@property (nonatomic) BOOL isFirstAppear;
@property (weak, nonatomic) id<AWERecordFlowSourceService> flowSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)firstFrameOpt;
- (void)bindService;
- (void)trackExitCameraEventWithIsDirectExit:(BOOL)a0;
- (void)syncInteractionStickerWithModel:(id)a0;
- (void)manullyClickCloseButtonSuccessfullyClose;
- (BOOL)shouldRemoveAllSegments;
- (void)saveTheOriginalDraft;
- (void)clearEditBackUp;
- (BOOL)scanToScanResponseWhenClickCloseEventIfNeed;
- (void)sendTrackLogWhenClickCloseEventIfNeed:(BOOL)a0;
- (BOOL)calculateIsBackAlertForDraft;
- (BOOL)calculateIsReShootActionWhenShowBackAlert;
- (BOOL)calculateIsSaveDraftActionWhenShowBackAlert;
- (void)sendReturnSheetShowTrack;
- (BOOL)caculateIsCancelAlert;
- (void)flowControlAB;
- (BOOL)calculateIsCancelIsDraftPath;
- (void)updateLastRecordButtonType;
- (void)giveUpDraftChangedEvent;
- (void)cancelDraftChangedEvent;
- (void)againShootEvent;
- (void)exitShootEvent;
- (void)cancelShootEvent;
- (void)exitCameraPageEvent;
- (void)againShootWhenBackEvent;
- (void)saveDraftEvent;
- (void)featureWillAppear;
- (void)clearDraftCache;
- (BOOL)filterCommonCaseForShowQuickPublishAndSaveDraftAction;
- (BOOL)filterBaseCaseForShowAction;
- (id)commonBackAlertActionTrackInfo;
- (void).cxx_destruct;
- (void)removeAllSegments;
- (id)initWithServiceProvider:(id)a0;

@end

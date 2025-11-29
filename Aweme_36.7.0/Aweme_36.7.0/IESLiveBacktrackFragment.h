@class AnchorBackRecordData, UIView, IESLiveBacktrackProgressView, IESLiveRoomMQEventReportApi, HTSLiveToolbarItem, NSString, HTSLiveBackRecordVideoMessage, IESLiveBacktrackApi, NSOperationQueue, NSTimer, UIImage, IESLiveScreenRecordPublishView;
@protocol IESLivePublishMediaService, IESLiveAnchorBacktrackPreferenceService, IESLiveBubbleGuide;

@interface IESLiveBacktrackFragment : IESLiveRoomComponent <IESLiveBacktrackRouter, HTSLiveMessageSubscriber>

@property (retain, nonatomic) id<IESLiveAnchorBacktrackPreferenceService> backtrackPreference;
@property (retain, nonatomic) id<IESLivePublishMediaService> publishMediaService;
@property (retain, nonatomic) UIView<IESLiveBubbleGuide> *tipView;
@property (retain, nonatomic) IESLiveScreenRecordPublishView *backtrackFinishedView;
@property (retain, nonatomic) IESLiveBacktrackProgressView *backtrackProgressView;
@property (retain, nonatomic) IESLiveRoomMQEventReportApi *eventReportApi;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long recordTime;
@property (retain, nonatomic) HTSLiveToolbarItem *backtrackItem;
@property (retain, nonatomic) IESLiveBacktrackApi *backtrackApi;
@property (retain, nonatomic) AnchorBackRecordData *recordData;
@property (copy, nonatomic) NSString *cancelExecutionId;
@property (retain, nonatomic) HTSLiveBackRecordVideoMessage *message;
@property (retain, nonatomic) NSOperationQueue *downloadQueue;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSTimer *progressTimer;
@property (retain, nonatomic) UIImage *snapshotImage;
@property (copy, nonatomic) NSString *mp4URL;
@property (nonatomic) BOOL backtrackAllowed;
@property (nonatomic) unsigned long long backtrackStatus;
@property (nonatomic) unsigned long long recordStatus;
@property (nonatomic) BOOL isSavingDraft;
@property (nonatomic) BOOL isSavingAlbum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (id)generateBackRecordItem;
- (void)startBackRecord;
- (BOOL)isBackRecording;
- (id)anchorBackRecordIdentifier;
- (void)setupRACObservr;
- (void)addBacktrackItem;
- (void)backtrackSuccessed:(BOOL)a0;
- (void)showPublicPanel:(id)a0 isWidget:(BOOL)a1;
- (void)addProgressAnimation;
- (void)operationSuccessed:(BOOL)a0;
- (void)reportBacktrackFailured:(id)a0;
- (void)downloadTses:(id)a0 type:(id)a1 completion:(id /* block */)a2;
- (void)reportSaveDraftSuccessfulEvent;
- (void)cancelBacktrack;
- (void)backtrackDone;
- (void)createBacktrackFileDirectory;
- (void)downloadFailure:(id)a0;
- (void)draftButtonDidTap;
- (void)downloadButtonDidTapWithPrivacyCert:(id)a0;
- (void)cancelButtonDidTap;
- (void)setupBacktrackingPanelUI;
- (id)backRecordEntryImageName;
- (void)showBacktrackItemDot:(BOOL)a0;
- (void)backtrackItemDidTap;
- (void)removeProgressAnimation;
- (id)screenshotImageWithView:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 imageScale:(double)a2;
- (void).cxx_destruct;
- (void)setup;
- (void)messageReceived:(id)a0;

@end

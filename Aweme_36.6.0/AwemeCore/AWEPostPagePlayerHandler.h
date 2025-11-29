@class NSString, AWEPostPageContext, ACCRepositoryWorkspace, AWEEditServiceFlowHandle;
@protocol IESServiceRegister, IESServiceProvider, ACCSequenceEditServiceProtocol, ACCEditServiceProtocol;

@interface AWEPostPagePlayerHandler : NSObject <AWEPostPagePlayerService>

@property (weak, nonatomic) id<IESServiceRegister, IESServiceProvider> serviceContainer;
@property (retain, nonatomic) AWEPostPageContext *context;
@property (readonly, weak, nonatomic) AWEEditServiceFlowHandle *editServiceHandle;
@property (nonatomic) BOOL playerDidLoadSignal;
@property (nonatomic) BOOL combinedDidDoneSignal;
@property (retain, nonatomic) ACCRepositoryWorkspace *combinedWorkspace;
@property (retain, nonatomic) id<ACCEditServiceProtocol> combinedEditService;
@property (nonatomic) BOOL isViewDidAppear;
@property (copy, nonatomic) id /* block */ captureCompletionForMixedSlides;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (copy, nonatomic) id /* block */ resetPlayerViewsBlk;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeInfoSticker:(long long)a0;
- (void)resetPlayerAndPreviewEdge;
- (struct CGSize { double x0; double x1; })coverSize;
- (void)configPlayer;
- (id)flowService;
- (void)stopPlayer;
- (void)bindServices:(id)a0;
- (void)restoreBackupCanvas:(id /* block */)a0;
- (void)activeCurrentNLEWithCompletion:(id /* block */)a0;
- (double)captureFrameIndex;
- (void)captureFrameAtIndex:(double)a0 processed:(BOOL)a1 preferredSize:(struct CGSize { double x0; double x1; })a2 compeletion:(id /* block */)a3;
- (void)recoverPlayerEdgeIfNeed;
- (void)updateSequeceEditServiceForReedit:(id)a0;
- (void)prepareCombinedDataIfNeeded;
- (void)trackCombinedEventWithDuration:(double)a0;
- (void)setPlayMusicRange;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)resetPlayer;
- (void)updatePlayer;

@end

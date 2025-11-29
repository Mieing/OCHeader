@class NSString, UIView, BDPUniqueID, NSMutableArray;

@interface BDPScreenRecorderInteractManager : NSObject <BDPContainerLifeCycleMessage, BDPBootLifeCycleMessage, BDPBubbleTipDelegate, BDPScreenRecorderMessage, BDPScreenRecorderInteractManager> {
    BDPUniqueID *_currentUniqueID;
    NSMutableArray *_startCompletionList;
    NSMutableArray *_stopCompletionList;
    UIView *_loadingView;
    UIView *_toastView;
    UIView *_bubbleView;
}

@property (readonly, nonatomic) BOOL isRecording;
@property (nonatomic) BOOL isStartingRecording;
@property (nonatomic) BOOL isStoppingRecording;
@property (copy, nonatomic) NSString *currentEndSource;
@property (nonatomic) double startScreenRecrodTimestamp;
@property (nonatomic) double totalForegroundDuration;
@property (nonatomic) double lastSwitchTimestamp;
@property (nonatomic) BOOL isCurrentUniqueIDForeground;
@property (readonly, nonatomic) BDPUniqueID *currentUniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (void)showToastWithMessage:(id)a0;
- (id)initService;
- (void)p_showLoadingView;
- (void)applicationExitWithUniqueID:(id)a0;
- (void)viewWillAppear:(id)a0 uniqueID:(id)a1;
- (void)viewDidAppear:(id)a0 uniqueID:(id)a1;
- (void)viewDidDisappear:(id)a0 uniqueID:(id)a1;
- (void)startScreenRecorderByAlertWithUniqueID:(id)a0 alertCompletion:(id /* block */)a1 completion:(id /* block */)a2;
- (void)stopScreenRecorderByAlertWithCompletion:(id /* block */)a0 endSource:(id)a1;
- (void)stopScreenRecorderDirectlyWithCompletion:(id /* block */)a0 endSource:(id)a1;
- (void)screenRecordDidStartWithExtra:(id)a0;
- (void)screenRecordDidStopWithExtra:(id)a0;
- (void)screenRecordReceiveException:(id)a0 extra:(id)a1;
- (void)screenRecordRunningStateDidChanged:(unsigned long long)a0;
- (void)bubbleDidHidden:(id)a0 closeType:(id)a1 showDuration:(double)a2;
- (void)showStartGuideViewWithCompletion:(id /* block */)a0 confirmAction:(id /* block */)a1;
- (void)startScreenRecorderDirectlyWithCompletion:(id /* block */)a0;
- (void)p_showScreenRecordGuideBubble;
- (void)tryToSetCurrentEndSource:(id)a0;
- (void)p_trackScreenRecordEnd;
- (void)p_completeStartScreenRecordWithSuccess:(BOOL)a0 toastMsg:(id)a1;
- (void)p_reallyToStopRecordingViewWithToastMsg:(id)a0;
- (void)p_bringAllViewtoFront;
- (void).cxx_destruct;
- (BOOL)isRecording;

@end

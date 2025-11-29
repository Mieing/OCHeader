@class UILabel, NSTimer, NSString;

@interface IESLiveTrialLiveStartFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber, IESLiveAnchorRecordCountDownEvent, IESLiveAnchorTrialLiveStartNormalEvent>

@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) NSTimer *checkTimer;
@property (retain, nonatomic) NSTimer *tryLiveCountTimer;
@property (retain, nonatomic) NSTimer *repeatCheckTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)trackTryLiveDialog:(BOOL)a0 isSubmit:(BOOL)a1;
- (void)didStartNormalRoom;
- (void)anchorRecordCountDownBegin;
- (void)anchorRecordCountDownEnd;
- (void)startRepeatCheck;
- (BOOL)isNeedShowStartLiveDialog;
- (void)showStartLiveDialog;
- (id)tryLiveTipsLabel:(id)a0;
- (void)cleanRepeatCheckTimer;
- (void)showTrialLiveTipsView;
- (void).cxx_destruct;
- (void)cleanTimer;
- (void)messageReceived:(id)a0;

@end

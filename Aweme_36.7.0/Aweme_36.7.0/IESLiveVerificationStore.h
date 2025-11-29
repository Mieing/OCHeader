@class IESLiveVerificationApi, NSTimer;
@protocol IESLiveVerificationProvider, IESLiveRoomService;

@interface IESLiveVerificationStore : NSObject

@property (retain, nonatomic) IESLiveVerificationApi *verificationApi;
@property (retain, nonatomic) id<IESLiveVerificationProvider> verifyProvider;
@property (retain, nonatomic) NSTimer *verificationTimer;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;

- (id)initWithRoomModel:(id)a0;
- (void)handleVerificationCodeMessage:(id)a0;
- (void)handleVerifyDecisionMessage:(id)a0;
- (void)clearVerificationTimer;
- (void)popPictureVerifyViewWithMessage:(id)a0 codeType:(long long)a1;
- (void)requestIdentifyCodeWithCompletion:(id /* block */)a0;
- (void)reportVerificationNoticeTrack;
- (void)trackManMachineCheckResultWithReason:(id)a0 status:(long long)a1;
- (void)startVerificationTimerWithDuration:(long long)a0;
- (void)trackManMachineCheckShowWithReason:(id)a0;
- (id)liveTypeTrackStringWithRoomScene:(long long)a0;
- (void)requestIdentifyStatus:(BOOL)a0 withVerificationId:(long long)a1 msgId:(long long)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end

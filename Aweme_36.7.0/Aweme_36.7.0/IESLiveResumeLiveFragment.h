@class IESLiveCheckExistAPI, NSError, NSString;
@protocol IESLiveMonitor;

@interface IESLiveResumeLiveFragment : IESLiveGuideComponent <HMDAPPExitReasonDetectorProtocol, IESLiveResumeLiveRouter>

@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (retain, nonatomic) IESLiveCheckExistAPI *checkExistAPI;
@property (nonatomic) BOOL isChecking;
@property (retain, nonatomic) NSError *appExitReason;
@property (nonatomic) BOOL hadStartLive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentMount;
- (void)componentUnmount;
- (BOOL)isCameraDenied;
- (void)didDetectExitReason:(int)a0 desc:(id)a1 info:(id)a2;
- (BOOL)isMicroPhoneDenied;
- (void)willStartLive;
- (void)checkExistChatroomWithRoom:(id)a0 completion:(id /* block */)a1;
- (void)checkExistLiveCompletion:(id /* block */)a0;
- (id)alertDescription:(id)a0;
- (void)trackResumeLive:(id)a0;
- (void)trackAnchorNotResumeReason;
- (long long)HMDRestartReason2LiveReason:(int)a0;
- (void).cxx_destruct;

@end

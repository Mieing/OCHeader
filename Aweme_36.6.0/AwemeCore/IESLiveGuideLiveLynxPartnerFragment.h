@class NSString, CreateInfoResponse_CreateInfo, UIView;
@protocol IESHYContainerProtocol;

@interface IESLiveGuideLiveLynxPartnerFragment : IESLiveGuideComponent <IESHYHybridViewLifecycleProtocol>

@property (retain, nonatomic) UIView<IESHYContainerProtocol> *partnerHybridContainer;
@property (retain, nonatomic) UIView *obsRemindView;
@property (nonatomic) unsigned long long liveType;
@property (retain, nonatomic) CreateInfoResponse_CreateInfo *openLiveModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentDidAppear;
- (void)componentDidDisappear;
- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidStartLoading;
- (void)viewDidRecieveError:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)liveTypeDidChange:(unsigned long long)a0;
- (void)createUIAndShow;
- (BOOL)isInObsAllowList;
- (void)handlePartnerViewDisplay:(BOOL)a0;
- (void)createObsRemindViewIfNeed;
- (void)createLynxIfNeed;
- (void)adjustPartnerViewShow;
- (double)bottomTabHeight;
- (void).cxx_destruct;

@end

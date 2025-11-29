@class NSArray, AWELivePaidStreamControlConfig, AWEAwemeModel, NSString, AWELiveRoomModel;
@protocol IESLivePaidStreamProvider, IESLivePaidStreamAction, IESLivePaidStreamService;

@interface AWELivePaidStreamControl : NSObject <IESLivePaidStreamPlugin, IESLivePaidStreamUIDelegate, AWELivePaidStreamControlProvider>

@property (weak, nonatomic) id<IESLivePaidStreamService> paidStreamService;
@property (retain, nonatomic) id<IESLivePaidStreamProvider> paidStream;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWELiveRoomModel *room;
@property (copy, nonatomic) NSArray *plugins;
@property (readonly, nonatomic) AWELivePaidStreamControlConfig *config;
@property (weak, nonatomic) id<IESLivePaidStreamAction> delegate;
@property (copy, nonatomic) id /* block */ shouldStopStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)installPaidStreamWithModel:(id)a0;
- (void)paidStreamWillStart:(id)a0;
- (void)paidStreamTrialDidStart:(id)a0;
- (void)paidStream:(id)a0 trialRemainingTimeDidChange:(double)a1;
- (void)paidStream:(id)a0 didFinishTrialWithReason:(unsigned long long)a1;
- (void)paidStream:(id)a0 actionForBlockType:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)paidStream:(id)a0 screenCapturedDidChange:(BOOL)a1;
- (id)trialContainerViewForPaidStream:(id)a0;
- (void)paidStream:(id)a0 didChangeAuthRetType:(unsigned long long)a1 retSource:(unsigned long long)a2 reason:(unsigned long long)a3;
- (void)paidStream:(id)a0 didChangeAuthPromiseType:(unsigned long long)a1 reason:(unsigned long long)a2;
- (BOOL)enableInstallPaidCameraPaidStream;
- (id)installCameraPaidStream:(id)a0;
- (BOOL)enableInstallPrivilegeCameraPaidStream;
- (id)installPrivilegeCameraPaidStream:(id)a0 cameraInfo:(id)a1;
- (id)installPaidStream;
- (BOOL)enableInstallVIPPaidStream;
- (id)installVIPPaidStream:(id)a0;
- (void)handlePaidLiveDataMessage:(id)a0;
- (void)handlePaidLiveTypeModifyMessage:(id)a0;
- (void)handleChannelMessage:(id)a0;
- (long long)paidChannelForLiveSource:(long long)a0;
- (void)installPlugins:(id)a0;
- (id)panelJumpUrlForLiveSource:(long long)a0;
- (id)actionBackgroundColorsForLiveSource:(long long)a0;
- (id)actionNormalTitleColorForLiveSource:(long long)a0;
- (id)getCameraTickDataWithCameraInfo:(id)a0;
- (id)pluginsForPaidStream:(id)a0;
- (id)trialViewForPaidStream:(id)a0;
- (id)installPaidStreamWithPBModel:(id)a0;
- (BOOL)vipPaidStreamDisabled;
- (void)uninstall;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end

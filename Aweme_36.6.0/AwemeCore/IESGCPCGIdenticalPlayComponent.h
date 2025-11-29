@class IESGCPCGIdenticalPlayLaunchInterceptor, IESGCPIdenticalPlayLynxView, NSDictionary, IESGCPCGIdenticalPlayVideoUploadBtn, NSString;
@protocol XPlayScreenRecordTask;

@interface IESGCPCGIdenticalPlayComponent : IESGCPCGInstanceBaseComponent <IESGCPCGIdenticalPlayRouter, IESGCPCGInstanceActions, XPlayScreenRecordTaskDelegate, IESGCPCGMessageChannelActions>

@property (nonatomic) BOOL start;
@property (nonatomic) BOOL end;
@property (retain, nonatomic) IESGCPIdenticalPlayLynxView *identicalPlayOverView;
@property (retain, nonatomic) IESGCPCGIdenticalPlayVideoUploadBtn *videoUploadBtn;
@property (nonatomic) BOOL isRecording;
@property (retain, nonatomic) id<XPlayScreenRecordTask> screenRecordTask;
@property (retain, nonatomic) NSDictionary *recordData;
@property (nonatomic) BOOL hasChallengeAgain;
@property (nonatomic) BOOL hasFullGame;
@property (retain, nonatomic) IESGCPCGIdenticalPlayLaunchInterceptor *responder;
@property (nonatomic, getter=isShowPlayOverView) BOOL showPlayOverView;
@property (retain, nonatomic) NSDictionary *anchorRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)screenRecordTask:(id)a0 didStart:(id)a1;
- (void)screenRecordTask:(id)a0 didStop:(id)a1;
- (void)screenRecordTask:(id)a0 didCompletion:(id)a1;
- (void)componentDestroy;
- (void)didSetGameCPDIContext;
- (BOOL)_isEnterFromMusicRoulette;
- (void)playInstance:(id)a0 stageDidChangeFrom:(long long)a1 toStage:(long long)a2 info:(id)a3;
- (void)playInstanceOnFirstFrameReceived:(id)a0 info:(id)a1;
- (void)componentDidAttached;
- (void)didReceiveOSDKChannelMessage:(id)a0;
- (void)didReceiveServerPushNoticeWithBiz:(id)a0 type:(id)a1 data:(id)a2;
- (void)sendPlayAgainMessage;
- (void)_dismissIdenticalPlayEndLynxView;
- (void)_dismissVideoUploadBtn;
- (void)_showIdenticalPlayVideoUploadBtn;
- (void)_identicalPlayStart;
- (void)_dismissVideoUploadBtnIfNeeded;
- (void)_identicalPlayEnd;
- (void)_showIdenticalPlayOverLynxViewWithIsDowngrade:(BOOL)a0;
- (void)_acquirePlayRecordUrl:(id)a0 size:(long long)a1;
- (void)_blockDownloadWithError:(id)a0;
- (void)_startRecord;
- (void)_stopRecord;
- (void)p_openAlbum;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isShowing;

@end

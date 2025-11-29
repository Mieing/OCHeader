@class AVPictureInPictureController, NSString, AVPlayerLayer, UIView, NSDate, IESLivePipUnitModel;
@protocol IESLiveSubscription;

@interface IESLiveOnePipAVPiPManager : NSObject <AVPictureInPictureControllerDelegate>

@property (retain, nonatomic) AVPictureInPictureController *pipController;
@property (retain, nonatomic) AVPlayerLayer *avPlayerLayer;
@property (copy, nonatomic) NSString *localVideoPath;
@property (retain, nonatomic) UIView *avLayerContainer;
@property (retain, nonatomic) IESLivePipUnitModel *model;
@property (retain, nonatomic) IESLivePipUnitModel *lastModel;
@property (retain, nonatomic) UIView *vicePlayerView;
@property (nonatomic) BOOL isShowingPip;
@property (copy, nonatomic) id /* block */ stopCompletionBlock;
@property (nonatomic) BOOL isReadyToStop;
@property (retain, nonatomic) id<IESLiveSubscription> timeControlStatusDispose;
@property (retain, nonatomic) id<IESLiveSubscription> isForbidShowDispose;
@property (retain, nonatomic) NSDate *startPiPDate;
@property (retain, nonatomic) NSDate *suspendDate;
@property (nonatomic) double suspendDuration;
@property (nonatomic) BOOL isNotGenerateLocalPath;
@property (nonatomic) BOOL isSuccessShowPip;
@property (nonatomic) BOOL isPipFailedToStart;
@property (nonatomic) BOOL isPipInitNotPlay;
@property (nonatomic) BOOL isInBackground;
@property (nonatomic) BOOL isCloseInBackground;
@property (nonatomic) BOOL isInSmallWindow;
@property (nonatomic) BOOL hasAddObserver;
@property (nonatomic) BOOL isStopByHand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearWithCallTrace:(id)a0;
- (void)changeObserverState:(BOOL)a0;
- (BOOL)isShowPip;
- (void)hidePipWithType:(long long)a0 completion:(id /* block */)a1;
- (void)adjustPipPlayerIfNeedWithModel:(id)a0;
- (void)setIsForbidShow:(BOOL)a0 changeChannelType:(long long)a1;
- (void)playLocalVideoWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 resetLayout:(BOOL)a1;
- (void)p_stopPictureInPictureInBackGround;
- (void)preparePlayerWithContainerView:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 resetLayout:(BOOL)a2;
- (id)p_realViewOfPipController;
- (void)p_logAVPipEvent:(id)a0 params:(id)a1;
- (id)p_trackForCommon;
- (void)trackMiniWindowDuration;
- (id)pipSystemTestParams;
- (void)trackForPipErrorString:(id)a0;
- (void)updatePipModel:(id)a0 changeType:(long long)a1 callTrace:(id)a2;
- (void)pictureInPictureControllerDidStopPictureInPicture:(id)a0;
- (void)pictureInPictureControllerDidStartPictureInPicture:(id)a0;
- (void).cxx_destruct;
- (void)pictureInPictureController:(id)a0 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)a1;
- (void)pictureInPictureControllerWillStartPictureInPicture:(id)a0;
- (void)pictureInPictureControllerWillStopPictureInPicture:(id)a0;
- (void)pictureInPictureController:(id)a0 failedToStartPictureInPictureWithError:(id)a1;
- (id)init;
- (void)dealloc;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (void)appDidBecomeActive;

@end

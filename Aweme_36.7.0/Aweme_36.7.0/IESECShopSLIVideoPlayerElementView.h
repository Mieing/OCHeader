@class IESECShopVideoInfoModel, NSString, IESECVideoPlayerController, UIImageView, UIView;
@protocol IESECShopSLIProgressBarProtocol;

@interface IESECShopSLIVideoPlayerElementView : IESECSliceXBaseContentElementView <IESECShopSLIProgressBarDelegate, IESECVideoPlayerControllerDelegate>

@property (retain, nonatomic) IESECVideoPlayerController *videoPlayer;
@property (retain, nonatomic) NSString *progressBarSliceKey;
@property (retain, nonatomic) IESECShopVideoInfoModel *videoInfoModel;
@property (retain, nonatomic) NSString *uniqueId;
@property (retain, nonatomic) UIImageView *pauseView;
@property (retain, nonatomic) UIImageView *coverView;
@property (weak, nonatomic) UIView<IESECShopSLIProgressBarProtocol> *progressBar;
@property (retain, nonatomic) NSString *previousPlayStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)vid;
- (void)updatePlayStatus:(id)a0;
- (BOOL)updateWithSliceXElement:(id)a0 error:(id *)a1;
- (void)togglePlayerSpeed:(double)a0;
- (void)seekToProgress:(double)a0 total:(double)a1;
- (void)videoReadyToDisplayOfPlayerController:(id)a0;
- (void)setupProgressBarIfNeeded;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)didMoveToWindow;
- (void)setupViews;

@end

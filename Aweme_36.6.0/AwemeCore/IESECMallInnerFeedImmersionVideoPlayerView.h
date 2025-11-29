@class UIImageView, UIView, IESECMallInnerFeedRecommendCardModel;
@protocol IESECAwemeVideoViewProtocol;

@interface IESECMallInnerFeedImmersionVideoPlayerView : UIView

@property (retain, nonatomic) IESECMallInnerFeedRecommendCardModel *viewModel;
@property (nonatomic) BOOL needUpdateVideo;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIView<IESECAwemeVideoViewProtocol> *awemePlayerView;

- (void)setVideoPlayerDelegate:(id)a0;
- (void)updateVideo;
- (BOOL)allowAwemePlayer;
- (void).cxx_destruct;
- (id)init;
- (void)setMute:(BOOL)a0;
- (void)setupUI;
- (void)updateWithNewModel:(id)a0;

@end

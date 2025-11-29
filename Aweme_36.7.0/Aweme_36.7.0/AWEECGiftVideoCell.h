@class NSString, UIImageView, AWEAwemeModel, UILabel, AWEGradientView, UIViewController;
@protocol AWEAwemePlayVideoControllerProtocol, AWEAwemePlayVideoProtocol;

@interface AWEECGiftVideoCell : UICollectionViewCell <BDXVideoPlayerDelegate, AWEECGiftVideoProtocol>

@property (retain, nonatomic) UIViewController<AWEAwemePlayVideoControllerProtocol, AWEAwemePlayVideoProtocol> *playVideoViewController;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *nickName;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *statusImageView;
@property (retain, nonatomic) AWEAwemeModel *awemeData;
@property (nonatomic) BOOL status;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupView;
- (void)p_setupLayout;
- (void)setVideoPlayerTag;
- (void)tap:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)endTransition;
- (BOOL)isPlaying;
- (void)beginTransition;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)transitionView;

@end

@class CAGradientLayer, NSString, UIImageView, AWETeenAlbumDataController, UIView, UILabel, NSMutableArray;

@interface AWETeenModeAlbumPanelMoreView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIView *avatarMaskView;
@property (retain, nonatomic) UIImageView *albumIcon;
@property (retain, nonatomic) UIView *loopContainerView;
@property (retain, nonatomic) UIView *loopLabelContainView;
@property (retain, nonatomic) CAGradientLayer *loopMaskLayer;
@property (retain, nonatomic) UILabel *albumTitleLabel;
@property (nonatomic) struct CGSize { double width; double height; } titleLabelSize;
@property (copy, nonatomic) NSString *albumTitle;
@property (retain, nonatomic) NSMutableArray *episodeCountLabelArr;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } episodeCountRect;
@property (nonatomic) double episodeMinWidth;
@property (retain, nonatomic) UIImageView *arrowView;
@property (nonatomic) long long currentIndex;
@property (nonatomic) double lastProgresss;
@property (retain, nonatomic) AWETeenAlbumDataController *dataController;
@property (copy, nonatomic) id /* block */ showAlbumPanel;

- (void)updateIndex:(unsigned long long)a0;
- (id)initWithDataController:(id)a0;
- (void)p_startAnimation;
- (void)p_rotated:(id)a0;
- (void)albumEpisodeSlideProgress:(double)a0;
- (void)p_setupSubViews;
- (void)p_initEpisodeCountLabel;
- (void)p_initAlbumInfo;
- (long long)p_calculateIndex;
- (void)p_resumeLayoutEpisodeLabelWithProgress:(double)a0;
- (unsigned long long)p_episode:(unsigned long long)a0;
- (void)p_resumeLayoutEpisodeLabel:(id)a0 atIndex:(long long)a1;
- (void)p_startAnimationIfNeeded;
- (void)p_configLoopContainerView;
- (id)p_loopLabel;
- (void)bottomBarDidclicked;
- (id)p_episodeCountLabel;
- (void)p_pauseAnimation;
- (void).cxx_destruct;
- (void)dealloc;

@end

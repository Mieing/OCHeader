@class IESLivePlaybackCommentStore, IESLivePlaybackNoHighlightedButton, IESLivePlaybackCommentSettingView, CALayer, UIView, UIButton;
@protocol IESLiveWebPPlayer;

@interface IESLivePlaybackCommentButton : UIControl <HTSLivePluginLayoutView>

@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) CALayer *bgLayer;
@property (nonatomic) BOOL isLandscape;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) IESLivePlaybackNoHighlightedButton *commentSwitchBtn;
@property (retain, nonatomic) UIView<IESLiveWebPPlayer> *commentSwitchAnimationBtn;
@property (nonatomic) BOOL portraitButtonShow;
@property (nonatomic) BOOL landscapeButtonShow;
@property (retain, nonatomic) IESLivePlaybackCommentSettingView *commentSettingButton;
@property (nonatomic) double contentWidth;
@property (retain, nonatomic) IESLivePlaybackCommentStore *store;

- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void)commentSwitchAnimationForOpen:(BOOL)a0;
- (id)openWebp;
- (id)closeWebp;
- (void)didClickCommentSettingBtn;
- (id)initWithStore:(id)a0 diContext:(id)a1;
- (void)setupSeparatorView;
- (void)setupCommentButton;
- (void)setupCommentSwitchBtn;
- (void)setupCommentSettingBtn;
- (void)didClickCommentSwithBtn;
- (id)buttonTitleText;
- (void)layoutForLandscape;
- (void)layoutForPortrait;
- (void)p_updateBackgroundWithURLs:(id)a0;
- (void)layoutCommentSettingButton;
- (void)refreshLayoutWithFullScreen:(BOOL)a0 urlArray:(id)a1;
- (void)displayButtonTitle:(id)a0 inDuration:(double)a1;
- (void).cxx_destruct;
- (id)viewType;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)binding;
- (void)addTarget:(id)a0 action:(SEL)a1 forControlEvents:(unsigned long long)a2;
- (void)setupViews;

@end

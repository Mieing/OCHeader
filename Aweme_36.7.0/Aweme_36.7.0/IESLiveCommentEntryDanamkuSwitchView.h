@class UIView, IESLiveDanamkuSwitchNoHighlightedButton;
@protocol IESLiveWebPPlayer;

@interface IESLiveCommentEntryDanamkuSwitchView : UIView

@property (nonatomic) BOOL isOpened;
@property (retain, nonatomic) IESLiveDanamkuSwitchNoHighlightedButton *switchButton;
@property (retain, nonatomic) UIView<IESLiveWebPPlayer> *switchAnimationButton;
@property (nonatomic) unsigned long long switchStyle;
@property (copy, nonatomic) id /* block */ didClicked;

- (void)didClickDanmakuSwitchBtn;
- (void)resetButtonAccessibility:(BOOL)a0;
- (void)commentSwitchForOpen:(BOOL)a0 animation:(BOOL)a1;
- (void)commentSwitchAnimationForOpen:(BOOL)a0;
- (void)commentSwitchForOpen:(BOOL)a0;
- (id)openWebp;
- (id)closeWebp;
- (id)initWithSwitchStyle:(unsigned long long)a0;
- (void)switchDanmakuButton:(BOOL)a0 animation:(BOOL)a1;
- (void).cxx_destruct;
- (void)setupViews;

@end

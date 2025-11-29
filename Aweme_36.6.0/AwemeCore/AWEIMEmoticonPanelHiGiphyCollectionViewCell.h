@class UILabel, LOTAnimationView, IESIMButton;

@interface AWEIMEmoticonPanelHiGiphyCollectionViewCell : AWEIMEmoticonPanelPageCollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) LOTAnimationView *liteEmojiAnimationView;
@property (retain, nonatomic) IESIMButton *actionButton;

- (void)didEndDisplayingCell;
- (void)p_showAnimation;
- (void)showHiTabAnimation;
- (void)createEmptyViewWithEmptyContentView:(id)a0;
- (void)p_onTouchAction;
- (void)p_showAnimationForPress:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)willDisplayCell;

@end

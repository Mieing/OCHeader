@class UILabel, MMMusicLyricPlayingLabel, UIView;

@interface MMMusicLyricsPanelCellTableViewCell : UITableViewCell {
    UILabel *_lyricsLabel;
    MMMusicLyricPlayingLabel *_playingLabel;
}

@property (retain, nonatomic) UIView *highlightedView;

+ (id)cellIdentifier;

- (id)init;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLyric:(id)a0 bFocus:(BOOL)a1;
- (void)updateLyricTextColor:(BOOL)a0;
- (void)setPlayingProgress:(double)a0 animated:(BOOL)a1 animateDuration:(double)a2;
- (void)pauseProgressAnimation;
- (void)resumeProgressAnimation;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;

@end

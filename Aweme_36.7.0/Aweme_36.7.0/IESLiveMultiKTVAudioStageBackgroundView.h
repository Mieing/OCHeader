@class UIImageView;
@protocol IESLiveWebPPlayer;

@interface IESLiveMultiKTVAudioStageBackgroundView : UIView

@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *webPPlayerView;

- (void)setWebPPlayerImageWithURLs:(id)a0 placeholderImage:(id)a1 completed:(id /* block */)a2;
- (BOOL)hasDefaultWebPPlayerImage;
- (void)setWebPPlayerImage:(id)a0;
- (void)setWebPPlayerImageWithURLs:(id)a0 placeholderImage:(id)a1;
- (void)stopAnimating;
- (void)startAnimating;
- (void).cxx_destruct;
- (id)init;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end

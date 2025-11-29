@class UIImageView, WCMarqueeTextView;
@protocol WCVideoProducerMusicInfoMarqueeViewProtocol;

@interface WCVideoProducerMusicInfoMarqueeView : UIView

@property (retain, nonatomic) UIImageView *musicIconView;
@property (retain, nonatomic) UIImageView *arrowIconView;
@property (retain, nonatomic) WCMarqueeTextView *marqueeTextView;
@property (weak, nonatomic) id<WCVideoProducerMusicInfoMarqueeViewProtocol> delegate;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateMarqueeTextContent:(id)a0;
- (void)startPlaying;
- (void)stopPlaying;
- (void)_onSelfTapped;
- (void)_relayoutView;
- (void)_initView;
- (void).cxx_destruct;

@end

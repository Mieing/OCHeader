@class CAGradientLayer, FinderUniCommentImageView, SightIconView, FinderUniCommentMediaItem, MMUIButton, MMUILabel;

@interface FinderUniCommentMediaView : WCFlexBaseView

@property (retain, nonatomic) FinderUniCommentImageView *imageView;
@property (retain, nonatomic) SightIconView *playButton;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) FinderUniCommentMediaItem *mediaItem;
@property (retain, nonatomic) MMUIButton *backgroundButton;
@property (retain, nonatomic) MMUILabel *durationLabel;
@property (retain, nonatomic) CAGradientLayer *durationGradientLayer;
@property (nonatomic) unsigned long long mode;
@property (copy, nonatomic) id /* block */ deleteHandler;
@property (copy, nonatomic) id /* block */ clickHandler;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;
- (void)updateWithMediaItem:(id)a0;
- (id)currentImageInfo;
- (id)currentVideoInfo;
- (void)updateDisplay;
- (void)layoutSubviews;
- (void)closeButtonClicked;
- (void)onBackgroundButtonClicked;
- (void).cxx_destruct;

@end

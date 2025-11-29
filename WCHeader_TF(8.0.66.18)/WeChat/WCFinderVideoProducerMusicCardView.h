@class MMUIImageView, WCMarqueeTextView, NSString, WCStoryLyricWaveView, UIView, UILabel;

@interface WCFinderVideoProducerMusicCardView : UICollectionViewCell <CAAnimationDelegate>

@property (retain, nonatomic) UIView *contentContainerView;
@property (retain, nonatomic) MMUIImageView *musicIconView;
@property (retain, nonatomic) WCStoryLyricWaveView *waveIconView;
@property (retain, nonatomic) UILabel *titleLabelView;
@property (retain, nonatomic) WCMarqueeTextView *lyricsMarqueeView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)loadMusicCellViewModel:(id)a0;
- (void)_startPlaying;
- (void)_stopPlaying;
- (void)_loadMusicTitle:(id)a0;
- (void)_loadMusicDescription:(id)a0;
- (void)_loadForAccessibility:(id)a0;
- (void)_initView;
- (void)_initTopInfoBar;
- (void)_initDescriptionBar;
- (void).cxx_destruct;

@end

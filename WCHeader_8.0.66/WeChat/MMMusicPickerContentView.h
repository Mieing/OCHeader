@class NSString, WCFlowLyricsView, UIImageView, MMUIActivityIndicatorView, WCStoryLyricWaveView, UILabel, RecommendedMusicInfo;

@interface MMMusicPickerContentView : MMUIView

@property (retain, nonatomic) UIImageView *musicLogoView;
@property (retain, nonatomic) WCStoryLyricWaveView *soundShapeView;
@property (retain, nonatomic) WCFlowLyricsView *flowLyricsView;
@property (retain, nonatomic) MMUIActivityIndicatorView *loadingView;
@property (retain, nonatomic) UILabel *songNameAndSingerNameView;
@property (retain, nonatomic) RecommendedMusicInfo *musicInfo;
@property (nonatomic) BOOL isFromBgmSearch;
@property (copy, nonatomic) NSString *musicLogoName;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 musicLogoName:(id)a1;
- (void)initViews;
- (void)addMusicLogo;
- (void)addSoundShapeView;
- (void)addFlowLyricsView;
- (void)addSongNameAndSingerNameView;
- (void)stopLoading;
- (void)setSelectState:(BOOL)a0;
- (void)readyToPlay;
- (void)replay;
- (void)replayFromFlowInMs:(unsigned long long)a0;
- (void)startLoading;
- (BOOL)isAnimating;
- (void)setContentViewData:(id)a0 withFromeBgmSearch:(BOOL)a1;
- (void).cxx_destruct;

@end

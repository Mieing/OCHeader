@class UIImageView, UILabel, WCFinderMelodyView;

@interface WCFinderEditImageMusicView : MMUIView

@property (retain, nonatomic) WCFinderMelodyView *melodyImageView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UILabel *chooseBGMTipsLabel;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UILabel *songInfoLabel;

+ (double)getImageMusicViewWidthWith:(id)a0 useEduTips:(BOOL)a1 screenSize:(struct CGSize { double x0; double x1; })a2 duration:(int)a3 hiddenArrow:(BOOL)a4;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpSubViews;
- (void)initDurationLabel;
- (void)initMelodyImageView;
- (void)initSongInfoLabel;
- (void)initArrowImageView;
- (void)initChooseBGMTipsLabel;
- (void)updateContentViewWith:(id)a0 useEduTips:(BOOL)a1 screenSize:(struct CGSize { double x0; double x1; })a2 duration:(int)a3 hiddenArrow:(BOOL)a4;
- (void).cxx_destruct;

@end

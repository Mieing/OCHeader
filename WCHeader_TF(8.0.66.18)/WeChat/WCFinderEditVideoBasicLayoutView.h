@class NSMutableArray;

@interface WCFinderEditVideoBasicLayoutView : WCEditVideoLayoutView

@property (retain, nonatomic) NSMutableArray *currentMusicLyrics;
@property (nonatomic) double currentLyricTotalTime;

- (void)initEditImageView;
- (void)EditVideoBGMViewLyricOnOffStateChange:(BOOL)a0;
- (void)onEditSuccess:(BOOL)a0 withTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (void)editImageViewLyricsWidgetHadBeenDeleted;
- (void)editImageViewLyricsWidgetHadBeenDoubleTap;
- (void)EditVideoBGMViewLyricUpdate:(id)a0 totalTime:(double)a1;
- (void)setPlayerTimeControlStatusChangeBlock;
- (id)customBottomButtonOrder;
- (unsigned long long)setBGMViewButtonOption;
- (id)getMusicLogoName;
- (BOOL)shouldShowNewBGMPanel;
- (void)bgmSelectedViewController:(id)a0 didSelectedMusic:(id)a1 atTabIndex:(unsigned long long)a2 index:(unsigned long long)a3 isTriggerByTap:(BOOL)a4;
- (void)bgmSelectedViewController:(id)a0 didClickLyricOnBtn:(BOOL)a1;
- (void).cxx_destruct;

@end

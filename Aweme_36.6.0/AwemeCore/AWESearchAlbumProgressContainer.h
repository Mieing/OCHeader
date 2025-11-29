@class AWESearchAlbumProgressConfig, AWEStoryProgressContainerView, AWEStoryProgressContainerConfig, UIView, AWESearchAlbumProgressView, NSMutableArray;

@interface AWESearchAlbumProgressContainer : UIView

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *progressContainer;
@property (retain, nonatomic) NSMutableArray *progressArr;
@property (nonatomic) long long progressTotalCount;
@property (retain, nonatomic) AWESearchAlbumProgressView *currentProgress;
@property (nonatomic) unsigned long long currentProgressIndex;
@property (retain, nonatomic) AWESearchAlbumProgressConfig *config;
@property (nonatomic) double lastWidth;
@property (retain, nonatomic) AWEStoryProgressContainerView *dotProgressView;
@property (retain, nonatomic) AWEStoryProgressContainerConfig *albumProgressViewConfig;
@property (nonatomic) BOOL autoRecalculateProgressFrame;

- (id)currentDotFromCenter;
- (long long)progressViewType;
- (void)updateProgressWithDuration:(double)a0 totalCount:(long long)a1 currentIndex:(long long)a2 currentProcess:(double)a3 currentDotFromCenter:(id)a4 needScrollAnimation:(BOOL)a5 needAnimation:(BOOL)a6;
- (void)updateProgressWithDuration:(double)a0 totalCount:(long long)a1 currentIndex:(long long)a2 currentProcess:(double)a3 needAnimation:(BOOL)a4;
- (void)updateProgressWithDuration:(double)a0 currentIndex:(long long)a1 currentProcess:(double)a2 needAnimation:(BOOL)a3;
- (void)setProgressUIWithTotalCount:(long long)a0;
- (void)setProgressUIWithConfig:(id)a0 totalCount:(long long)a1;
- (void)resetProgressUIWithConfig:(id)a0 totalCount:(long long)a1;
- (void)setProgressUI;
- (BOOL)enableFixFirstIndexHighlight;
- (void)recalculateProgressContainerFrame;
- (id)initWithProgressConfig:(id)a0;
- (void)setProgressUIWithConfig:(id)a0;
- (void)updateProgressUIWithConfig:(id)a0;
- (void).cxx_destruct;
- (long long)totalCount;
- (void)layoutSubviews;

@end

@class IESGCPAlbumProgressConfig, AWEGCPAlbumProgressView, UIView, NSMutableArray;

@interface AWEGCPAlbumProgressContainer : UIView

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *progressContainer;
@property (retain, nonatomic) NSMutableArray *progressArr;
@property (nonatomic) long long progressTotalCount;
@property (retain, nonatomic) AWEGCPAlbumProgressView *currentProgress;
@property (nonatomic) unsigned long long currentProgressIndex;
@property (retain, nonatomic) IESGCPAlbumProgressConfig *config;
@property (nonatomic) double lastWidth;

- (void)updateProgressWithDuration:(double)a0 totalCount:(long long)a1 currentIndex:(long long)a2 currentProcess:(double)a3 needAnimation:(BOOL)a4;
- (void)updateProgressWithDuration:(double)a0 currentIndex:(long long)a1 currentProcess:(double)a2 needAnimation:(BOOL)a3;
- (void)setProgressUIWithTotalCount:(long long)a0;
- (void)setProgressUIWithConfig:(id)a0 totalCount:(long long)a1;
- (void)resetProgressUIWithConfig:(id)a0 totalCount:(long long)a1;
- (void)setProgressUI;
- (void)setProgressUIWithConfig:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (long long)totalCount;

@end

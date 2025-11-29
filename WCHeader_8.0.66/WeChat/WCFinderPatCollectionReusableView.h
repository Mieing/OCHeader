@protocol WCFinderPatCollectionReusableViewDelegate;

@interface WCFinderPatCollectionReusableView : UICollectionReusableView

@property (weak, nonatomic) id<WCFinderPatCollectionReusableViewDelegate> delegate;

+ (double)getPatMusicHeightWithBgmInfo:(id)a0 titleWording:(id)a1 screenWid:(double)a2 enablePostFeed:(BOOL)a3;

- (void)updatePatMusicWithBgmInfo:(id)a0 patCount:(unsigned long long)a1 readTotalCount:(unsigned long long)a2 titleWording:(id)a3 enablePostFeed:(BOOL)a4;
- (void)playMusicWith:(id)a0;
- (void)playMusicWith:(id)a0 isPlay:(BOOL)a1;
- (void)stopMusicPlay;
- (void)resumeMusicPlay;
- (BOOL)patPostButtonShow;
- (void).cxx_destruct;

@end

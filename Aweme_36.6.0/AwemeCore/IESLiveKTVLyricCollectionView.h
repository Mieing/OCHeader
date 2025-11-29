@class IESLiveKTVLyricCollectionViewFlowLayout, NSString, IESLiveKTVLyricViewWordResultModel, IESLiveKRCSong, CAGradientLayer, UICollectionView, NSMutableArray, IESLiveLyricViewConfig;

@interface IESLiveKTVLyricCollectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, IESLiveMultiKTVLyricProtocol>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IESLiveKTVLyricCollectionViewFlowLayout *layout;
@property (retain, nonatomic) NSMutableArray *cellData;
@property (retain, nonatomic) IESLiveLyricViewConfig *config;
@property (nonatomic) double playingTime;
@property (retain, nonatomic) IESLiveKTVLyricViewWordResultModel *preResult;
@property (nonatomic) BOOL isAnimateDragging;
@property (nonatomic) double dragingEndTS;
@property (retain, nonatomic) IESLiveKRCSong *krcSong;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) double lyricSkipTime;
@property (nonatomic) BOOL enlarged;
@property (nonatomic) BOOL enableRecursiveSplit;
@property (nonatomic) BOOL isShowingLyric;
@property (nonatomic) double startTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateConfig:(id)a0;
- (void)initView;
- (double)getViewHeight;
- (void)updateFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLyrics:(id)a0;
- (void)updatePlayingTime:(double)a0;
- (int)isOverViewWidth:(id)a0;
- (void)updateIndicatorLayout;
- (id)layerLocations;
- (id)recursiveSplitSentence:(id)a0 currentDepth:(long long)a1 maxDepth:(long long)a2;
- (void)needEnlargeFirstSentence:(BOOL)a0;
- (void)scrollToWord:(id)a0;
- (id)findCellWithItem:(long long)a0;
- (void)scrollToSingingLine:(long long)a0 completion:(id /* block */)a1;
- (void)scrollToSingingLineWithDelay:(double)a0;
- (double)getFirstWordWidth;
- (BOOL)hasLyrics;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)clean;

@end

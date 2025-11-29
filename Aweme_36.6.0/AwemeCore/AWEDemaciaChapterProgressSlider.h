@class UIColor, NSArray, UICollectionView, UIFont, UIView, NSString, UITapGestureRecognizer;
@protocol AWEDemaciaChapterProgressSliderDelegate;

@interface AWEDemaciaChapterProgressSlider : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (nonatomic) long long type;
@property (copy, nonatomic) NSArray *chapterList;
@property (copy, nonatomic) NSArray *colorList;
@property (nonatomic) double playTime;
@property (nonatomic) double totalTime;
@property (nonatomic) double lastPlayTime;
@property (nonatomic) long long playingLoopAnimationIndex;
@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIView *playedView;
@property (retain, nonatomic) UICollectionView *chapterView;
@property (nonatomic) double seekingTime;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (retain, nonatomic) UIColor *separatorColor;
@property (weak, nonatomic) id<AWEDemaciaChapterProgressSliderDelegate> delegate;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } hitTestEdgeInsets;
@property (nonatomic) BOOL enabledTap;
@property (retain, nonatomic) UIFont *chapterDescFont;
@property (retain, nonatomic) UIColor *playedViewColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)updateWithCurrentTime:(double)a0 totalTime:(double)a1 animated:(BOOL)a2;
- (id)initWithType:(long long)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)defaultPlayedViewColor;
- (void)updateWithChapterList:(id)a0 colorList:(id)a1 totalTime:(double)a2;
- (void)seekToChapterTimestampWithNewChapterList:(id)a0 oldChapterList:(id)a1;
- (void)updatePlayedViewColorWithPlayTime:(double)a0 animated:(BOOL)a1;
- (void)updateWithPlayTime:(double)a0 animated:(BOOL)a1;
- (void)playLoopAnimationWithCurrentTime:(double)a0;
- (long long)chapterIndexWithPlayTime:(double)a0;
- (void)handleClickChapterProgress:(id)a0;
- (void)updateWithChapterList:(id)a0 totalTime:(double)a1;
- (void)updateWithCurrentTime:(double)a0 totalTime:(double)a1;
- (void)reloadData;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)reset;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end

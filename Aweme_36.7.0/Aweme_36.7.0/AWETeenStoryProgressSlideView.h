@class CAGradientLayer, NSString, UICollectionView, NSArray, NSMutableArray, AWETeenStoryProgressContainerConfig;
@protocol AWETeenStoryProgressSlideViewDelegate;

@interface AWETeenStoryProgressSlideView : UIView <UIGestureRecognizerDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    NSArray *_p_accessibilityElements;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) CAGradientLayer *collectionViewGradientLayer;
@property (retain, nonatomic) NSMutableArray *progressArr;
@property (retain, nonatomic) NSMutableArray *progressLastValueArr;
@property (nonatomic) long long progressTotalCount;
@property (nonatomic) unsigned long long currentProgressIndex;
@property (nonatomic) unsigned long long lastTimePorgressIndex;
@property (nonatomic) double currentProgressDuration;
@property (nonatomic) double currentProgressProcess;
@property (nonatomic) double lastContainerWidth;
@property (nonatomic) BOOL currentProgressNeedAnimation;
@property (retain, nonatomic) AWETeenStoryProgressContainerConfig *config;
@property (weak, nonatomic) id<AWETeenStoryProgressSlideViewDelegate> delegate;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } currentProgressViewFrame;
@property (readonly, nonatomic) double currentProgressPercentage;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } currentProgressViewProgressSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCurrentIndex:(long long)a0 totalCount:(long long)a1 config:(id)a2;
- (void)tapProgressView:(id)a0;
- (double)slideViewWidth;
- (void)reloadGradientStatusWithIndex:(long long)a0;
- (void)deviceRotation;
- (void)slideToCurrentProgress;
- (double)horizonContainerWidth;
- (double)exactMinimumLineSpacing;
- (void)updateProgressWithDuration:(double)a0 totalCount:(long long)a1 currentIndex:(long long)a2 currentProgress:(double)a3 needAnimation:(BOOL)a4;
- (void)updateProgressWithDuration:(double)a0 currentIndex:(long long)a1 currentProgress:(double)a2 needAnimation:(BOOL)a3;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)accessibilityElements;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)setAccessibilityElements:(id)a0;
- (long long)totalCount;
- (void)addObserver;
- (void)layoutSubviews;
- (id)currentProgress;
- (BOOL)shouldGroupAccessibilityChildren;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)indexOfAccessibilityElement:(id)a0;
- (void)setupUI;
- (long long)maxProgressCount;

@end

@class CAGradientLayer, NSMutableArray, UICollectionView, NSString, UIView, MMUIButton, MMUILabel;
@protocol WCFinderLiveReplayMomentsViewDelegate;

@interface WCFinderLiveReplayMomentsView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMUILabel *headerLabel;
@property (retain, nonatomic) CAGradientLayer *bottomGradientLayer;
@property (retain, nonatomic) UICollectionView *momentsCollectionView;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (nonatomic) double lastContentViewHeight;
@property (retain, nonatomic) NSMutableArray *replayMoments;
@property (nonatomic) double replayVideoWHPercent;
@property (readonly, nonatomic) double replayMomentCellWidth;
@property (readonly, nonatomic) double replayMomentCellHeight;
@property (weak, nonatomic) id<WCFinderLiveReplayMomentsViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithReplayVideoWHPercent:(double)a0;
- (void)layoutSubviews;
- (void)initUI;
- (void)layoutUI;
- (double)contentViewHeight;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (double)preferHeight;
- (void)openWithAnimation:(BOOL)a0 completeBlock:(id /* block */)a1;
- (void)closeWithAnimation:(BOOL)a0 completion:(id /* block */)a1;
- (void)updateGreateTimeList:(id)a0;
- (BOOL)isOpen;
- (BOOL)shouldConsumeTouchFromFullScreenPanGesture:(id)a0 fromView:(id)a1;
- (void)closeAction;
- (BOOL)isLandScape;
- (double)getMomentsCollectionViewHeight;
- (void).cxx_destruct;

@end

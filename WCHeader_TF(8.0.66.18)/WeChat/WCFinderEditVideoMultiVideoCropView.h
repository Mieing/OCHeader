@class EditVideoAttr, NSString, UIButton, MMUIView, NSMutableArray, WCFinderEditVideoPorgressInfoViewModel, UILabel, UIScrollView;
@protocol WCFinderEditVideoMultiVideoCropViewDelegate;

@interface WCFinderEditVideoMultiVideoCropView : MMUIView <UICollectionViewDataSource, UIScrollViewDelegate>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) NSMutableArray *collectionViews;
@property (retain, nonatomic) NSMutableArray *leftPansView;
@property (retain, nonatomic) NSMutableArray *rightPansViews;
@property (retain, nonatomic) NSMutableArray *topLineViews;
@property (retain, nonatomic) NSMutableArray *bottomLineViews;
@property (retain, nonatomic) MMUIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) UIButton *doneBtn;
@property (retain, nonatomic) UIButton *playBtn;
@property (retain, nonatomic) UILabel *cropTipsLabel;
@property (weak, nonatomic) WCFinderEditVideoPorgressInfoViewModel *progressViewModel;
@property (retain, nonatomic) EditVideoAttr *attr;
@property (nonatomic) double minDuration;
@property (nonatomic) BOOL isScrollingTriggerByPlayer;
@property (nonatomic) BOOL isScrollingTriggerByCropPanEnd;
@property (nonatomic) BOOL isPaningForCropTime;
@property (nonatomic) BOOL ignoreShock;
@property (nonatomic) unsigned long long scrollTriggerTime;
@property (retain, nonatomic) NSMutableArray *backUpSingleAttrs;
@property (weak, nonatomic) id<WCFinderEditVideoMultiVideoCropViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)setupWithAttr:(id)a0;
- (void)reloadCollectionViews;
- (void)setupSubView;
- (void)adjustScrollViewContentInset;
- (void)setCurserHidden:(BOOL)a0 atIndex:(unsigned long long)a1;
- (void)updateCropTips;
- (void)updateScrollViewContent;
- (void)saveOriginEditData;
- (void)setProgress:(double)a0 withAnimatedDuration:(double)a1;
- (void)setCropTitleHidden:(BOOL)a0;
- (BOOL)isPaused;
- (void)pauseVideo;
- (void)resumeVideo;
- (BOOL)isShowing;
- (void)changePauseState:(BOOL)a0;
- (void)playShock;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)updateCollectionViewSelectState;
- (void)onClickCloseBtn:(id)a0;
- (void)onClickDoneBtn:(id)a0;
- (void)onClickPlayBtn:(id)a0;
- (void)handleTap:(id)a0;
- (void)handlePan:(id)a0;
- (void).cxx_destruct;

@end

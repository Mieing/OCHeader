@class NSString, NSProgress, ACCEditMediaScrollViewCell, NSMutableSet, NSMutableArray;
@protocol AEKSequencePlayerScrollViewDataSource, AEKSequencePlayerScrollViewDelegate;

@interface ACCEditMediaScrollView : UIScrollView <AEKSequencePlayerScrollViewProtocol>

@property (retain, nonatomic) NSMutableArray *cells;
@property (retain, nonatomic) NSMutableSet *visibleCells;
@property (retain, nonatomic) ACCEditMediaScrollViewCell *currentCell;
@property (retain, nonatomic) ACCEditMediaScrollViewCell *preCell;
@property (retain, nonatomic) ACCEditMediaScrollViewCell *nextCell;
@property (retain, nonatomic) ACCEditMediaScrollViewCell *prepareCell;
@property (nonatomic) BOOL cycling;
@property (nonatomic) BOOL scrollingWithOutAnimation;
@property (nonatomic) long long currentIndex;
@property (nonatomic) unsigned long long count;
@property (nonatomic) BOOL shouldChangeAnimationDuration;
@property (nonatomic) struct CGSize { double width; double height; } mediaSize;
@property (weak, nonatomic) id<AEKSequencePlayerScrollViewDelegate> delegate;
@property (weak, nonatomic) id<AEKSequencePlayerScrollViewDataSource> dataSource;
@property (readonly, nonatomic) NSProgress *scrollProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCount:(unsigned long long)a0 standSize:(struct CGSize { double x0; double x1; })a1;
- (void)configCoverImageViewBGColor:(id)a0 equalToMediaSize:(BOOL)a1;
- (id)cellsIncludingPlaceholderAtIndex:(long long)a0;
- (void)configPreviewMode:(BOOL)a0;
- (void)scrollToOffsetX:(double)a0;
- (void)scrollToIndexIfNeedExperiment:(long long)a0 animated:(BOOL)a1 isBeatsOn:(BOOL)a2 duration:(double)a3;
- (void)resetCyclingState;
- (long long)indexAtOffset:(double)a0;
- (void)initLoad;
- (void)setupCells;
- (void)configPrepareCell;
- (void)scrollToOffsetXOrigin:(double)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animated:(BOOL)a1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)reload:(BOOL)a0;
- (void)updateWithCount:(unsigned long long)a0;
- (void)scrollToIndex:(long long)a0 animated:(BOOL)a1;
- (id)cellAtIndex:(long long)a0;

@end

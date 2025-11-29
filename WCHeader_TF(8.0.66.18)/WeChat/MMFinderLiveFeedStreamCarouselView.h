@class NSString, MMFinderLiveFeedStreamCarouselConfig, MMFinderLiveFeedStreamCarouselCell, NSMutableArray, MMFinderLiveFeedStreamCarouselBaseItem;
@protocol MMFinderLiveFeedStreamCarouselViewDelegate, MMFinderLiveFeedStreamCarouselItemProtocol;

@interface MMFinderLiveFeedStreamCarouselView : MMFinderLiveFeedStreamWidgetBaseView <MMFinderLiveFeedStreamCarouselCellDelegate>

@property (retain, nonatomic) NSMutableArray *models;
@property (retain, nonatomic) NSMutableArray *reuseCellsPool;
@property (readonly, nonatomic) MMFinderLiveFeedStreamCarouselBaseItem<MMFinderLiveFeedStreamCarouselItemProtocol> *currentModel;
@property (retain, nonatomic) MMFinderLiveFeedStreamCarouselCell *currentCell;
@property (nonatomic) unsigned long long index;
@property (retain, nonatomic) MMFinderLiveFeedStreamCarouselConfig *config;
@property (nonatomic) BOOL isCarouseling;
@property (nonatomic) BOOL waitDataToCarousel;
@property (nonatomic) double lastCalculateHeight;
@property (nonatomic) double lastLayoutWidth;
@property (nonatomic) BOOL isIsAnimation;
@property (retain, nonatomic) MMFinderLiveFeedStreamCarouselBaseItem<MMFinderLiveFeedStreamCarouselItemProtocol> *waitAnimationFinishToRemovedItem;
@property (nonatomic) BOOL isDelaying;
@property (weak, nonatomic) id<MMFinderLiveFeedStreamCarouselViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)reload:(id)a0 config:(id)a1;
- (void)addOrUpdate:(id)a0;
- (void)replaceModel:(id)a0 withNewModel:(id)a1;
- (void)update:(id)a0;
- (BOOL)isDuplicateAllow:(id)a0;
- (void)add:(id)a0;
- (void)_singleItemInsert:(id)a0;
- (void)removeModel:(id)a0;
- (void)removeCellType:(unsigned long long)a0;
- (void)checkDelayRemoveOnAnimationFinish;
- (void)correctedIndex:(id)a0;
- (void)resetIndex;
- (BOOL)changeToIndex:(unsigned long long)a0 animation:(BOOL)a1;
- (void)refreshCurrentCell;
- (void)updateSize;
- (void)updateCellSize:(id)a0;
- (void)carouselChangeToNext;
- (id)cellWithModel:(id)a0;
- (void)reuseToPool:(id)a0;
- (void)startCarousel;
- (void)stopCarousel;
- (void)startExposeAction;
- (void)endExposeAction;
- (void)setTaskId:(id)a0;
- (void)delayCarousel;
- (id)hasNotShownItems;
- (void)onCarouselViewProductStyleClicked:(id)a0 jump2Type:(unsigned long long)a1 productInfo:(id)a2;
- (void)onCarouselViewTextLineStyleClicked;
- (void)onCarouselViewCommentStyleClicked;
- (void)onCarouselViewBuyTogetherClicked:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end

@class NSTimer, NSNumber;

@interface ACCToolBarSectionFoldView : ACCToolBarView

@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) double labelShowTimeInterval;
@property (nonatomic) unsigned long long recordFoldedMaxCount;
@property (nonatomic) unsigned long long editFoldedMaxCount;
@property (retain, nonatomic) NSNumber *minFoldCountNumber;
@property (retain, nonatomic) NSNumber *maxFoldCountNumber;
@property (copy, nonatomic) NSNumber *barItemDirectionValue;

- (id)expandTitle;
- (void)showAllLabel;
- (unsigned long long)barItemDirection;
- (id)scrollStackView;
- (void)p_initSettings;
- (void)layoutMoreButtonView;
- (id)indexesOfItemsToFold;
- (unsigned long long)p_numberOfItemsFolded;
- (void)hideAllLabelAfterSeconds:(double)a0;
- (void)onMoreButtonClicked;
- (void)foldViews;
- (void)scrollToExpand;
- (id)p_itemViewsToFold;
- (BOOL)p_shouldShowMoreButton;
- (unsigned long long)p_numberOfItemsToShow;
- (long long)numberOfItemsFoldedWithFirstFrameBefore;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupUI;

@end

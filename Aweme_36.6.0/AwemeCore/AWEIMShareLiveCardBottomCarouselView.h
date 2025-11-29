@class NSArray, NSTimer, AWEIMLiveMessageExtendedCarouselItemModel, AWEIMShareLiveCardBottomCarouselItemView;

@interface AWEIMShareLiveCardBottomCarouselView : UIView

@property (retain, nonatomic) AWEIMShareLiveCardBottomCarouselItemView *firstLabel;
@property (retain, nonatomic) AWEIMShareLiveCardBottomCarouselItemView *secondLabel;
@property (nonatomic) BOOL isShowingSecondLabel;
@property (copy, nonatomic) NSArray *itemModels;
@property (retain, nonatomic) NSTimer *carouselTimer;
@property (nonatomic) double itemHeight;
@property (retain, nonatomic) AWEIMLiveMessageExtendedCarouselItemModel *currentItem;
@property (nonatomic) BOOL itemModelsHasChanged;
@property (nonatomic) unsigned long long nextItemIndexToPlay;
@property (copy, nonatomic) id /* block */ comparator;

+ (double)carouselViewHeight;

- (void)p_stopTimer;
- (void)p_startTimer;
- (void)resetForReuse;
- (void)p_showNextItem;
- (long long)p_getCurrentItemType;
- (unsigned long long)p_binaryFindNextIndexWithCurrentType:(long long)a0;
- (void)p_updateWithItem:(id)a0;
- (void)configWithItemModels:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

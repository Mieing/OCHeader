@class MMTimer, MMFinderLiveWidgetContainerViewConfig, NSMutableArray, MMFinderLiveWidgetItem;

@interface MMFinderLiveWidgetContainerView : UIView

@property (retain, nonatomic) MMFinderLiveWidgetContainerViewConfig *config;
@property (retain, nonatomic) NSMutableArray *displayingWidgets;
@property (retain, nonatomic) NSMutableArray *pendingWidgets;
@property (retain, nonatomic) MMTimer *currentWidgetAnimationTimer;
@property (nonatomic) double lastWidgetAnimationStartTs;
@property (retain, nonatomic) MMFinderLiveWidgetItem *enteringItem;
@property (nonatomic) unsigned long long layoutStyle;
@property (copy, nonatomic) id /* block */ contentSizeDidChangeCallback;

- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (void)addWidgetToDisplayQueue:(id)a0 leadForEnterAnimation:(double)a1 startEntranceCallback:(id /* block */)a2 changeToNormalStateCallback:(id /* block */)a3;
- (void)addWidgetToDisplayQueueWithItem:(id)a0;
- (void)removeWidgetAnimated:(id)a0 completion:(id /* block */)a1;
- (void)_removeWidgetView:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)displayNextPendingWidget;
- (void)displayPendingWidgetsVerticalBigStyle;
- (void)displayAllWidgetsVerticalBigStyle;
- (void)displayAllWidgetsInHorizontalDefaultStyle;
- (void)layoutDisplayingWidgets;
- (void)layoutDisplayingWidgetsWhenRemove:(BOOL)a0;
- (double)getWidgetLayoutLeft;
- (long long)displayingWidgetCount;
- (void)_doStartCurrentWidgetEnterAnimation;
- (void)onCurrentWidgetEnterAnimationTimeout;
- (BOOL)isWidgetPendingOrBeingDisplayed:(id)a0;
- (id)widgetPendingOrBeingDisplayedWithCondition:(id /* block */)a0;
- (void)willRemoveSubview:(id)a0;
- (void)setWidth:(double)a0;
- (void)setHeight:(double)a0;
- (double)getWidgetPadding;
- (void).cxx_destruct;

@end

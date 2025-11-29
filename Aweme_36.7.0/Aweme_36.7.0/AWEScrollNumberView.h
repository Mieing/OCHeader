@class NSString, AWEScrollNumberViewConfig, AWERollingTextLabel, NSNumber, NSMutableArray;
@protocol AWEScrollNumberViewDelegate;

@interface AWEScrollNumberView : UIView <AWERollingViewAnimateDelegate>

@property (retain, nonatomic) AWEScrollNumberViewConfig *config;
@property (retain, nonatomic) NSNumber *currentNumber;
@property (retain, nonatomic) NSNumber *targetNumber;
@property (nonatomic) unsigned long long rowNumber;
@property (retain, nonatomic) NSMutableArray *numberLabelArray;
@property (nonatomic) long long numberWidth;
@property (nonatomic) long long numberHeight;
@property (retain, nonatomic) NSMutableArray *taskQueue;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) long long finishedAnimationCount;
@property (retain, nonatomic) AWERollingTextLabel *signRollingView;
@property (nonatomic) unsigned long long signRow;
@property (weak, nonatomic) id<AWEScrollNumberViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initViews;
- (double)currentViewHeight;
- (void)changeToNumber:(id)a0 interval:(double)a1 animated:(BOOL)a2;
- (id)initWithNumber:(id)a0 config:(id /* block */)a1;
- (id)initWithNumber:(id)a0 config:(id /* block */)a1 rowNumber:(unsigned long long)a2;
- (long long)calculateNumberRow:(long long)a0;
- (void)animationWithNumber:(id)a0 duration:(double)a1 animated:(BOOL)a2;
- (void)oneAnimationDidFinishedWithTotalCount:(long long)a0;
- (void)initParent;
- (BOOL)isSignChangedWithNumber:(id)a0 targetNumber:(id)a1;
- (id)makeNumberView;
- (id)getValueArrayWithTargetNumber:(long long)a0;
- (void)updateToRowNumber:(long long)a0 signChanged:(BOOL)a1 animated:(BOOL)a2;
- (void)checkTaskArray;
- (void)removeAllViewFromSuperview;
- (void)updateViewModelToFitRowNumber:(long long)a0;
- (void)updateViewLayoutToFitRowNumber:(unsigned long long)a0 withAnimation:(BOOL)a1;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)commonInit;
- (void)layoutSubviews;
- (double)currentViewWidth;

@end

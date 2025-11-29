@class NSNumber, NSString, AFDDotsIndicatorView;
@protocol AWEStoryProgressContainerViewDelegate;

@interface AFDDotsIndicatorContainerView : UIView <AFDStoryProgressContainerViewProtocol>

@property (retain, nonatomic) AFDDotsIndicatorView *indicatorView;
@property (retain, nonatomic) AFDDotsIndicatorView *otherIndicatorView;
@property (nonatomic) long long dotsTotalCount;
@property (nonatomic) unsigned long long currentProgressIndex;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } currentProgressViewFrame;
@property (nonatomic) double currentProgressPercentage;
@property (nonatomic) struct CGSize { double width; double height; } currentProgressViewProgressSize;
@property (readonly, nonatomic) NSNumber *currentDotFromCenter;
@property (weak, nonatomic) id<AWEStoryProgressContainerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateProgressWithDuration:(double)a0 totalCount:(long long)a1 currentIndex:(long long)a2 currentProcess:(double)a3 currentDotFromCenter:(id)a4 needScrollAnimation:(BOOL)a5 needAnimation:(BOOL)a6;
- (id)initWithCurrentIndex:(long long)a0 totalCount:(long long)a1 config:(id)a2;
- (void)updateProgressWithDuration:(double)a0 totalCount:(long long)a1 currentIndex:(long long)a2 currentProcess:(double)a3 needAnimation:(BOOL)a4;
- (void)updateProgressWithDuration:(double)a0 currentIndex:(long long)a1 currentProcess:(double)a2 needAnimation:(BOOL)a3;
- (id)initWithCurrentIndex:(long long)a0 totalCount:(long long)a1 colorStyle:(unsigned long long)a2 dotMaxSize:(id)a3 dotMidSize:(id)a4 dotLongSelectedSizeWidth:(id)a5 progressStyle:(unsigned long long)a6 needBlurBackground:(BOOL)a7;
- (id)initWithCurrentIndex:(long long)a0 totalCount:(long long)a1 colorStyle:(unsigned long long)a2;
- (void).cxx_destruct;
- (long long)totalCount;

@end

@class NSArray, UIImageView, NSTimer, UIScrollView, UIView, NSString;
@protocol CJPayIndicatorViewDelegate, CJPayLoopViewDelegate;

@interface CJPayLoopView : UIView <UIScrollViewDelegate>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) NSArray *views;
@property (retain, nonatomic) UIImageView *leftPosView;
@property (retain, nonatomic) UIImageView *rightPosView;
@property (retain, nonatomic) NSTimer *timer;
@property (copy, nonatomic) NSArray *durationArray;
@property (nonatomic) int pageNum;
@property (weak, nonatomic) id<CJPayLoopViewDelegate> delegate;
@property (weak, nonatomic) id<CJPayIndicatorViewDelegate> indicatorDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)autoScroll;
- (void)stopAutoScroll;
- (void)startAutoScroll;
- (long long)calTureIndexBy:(long long)a0;
- (void)correctContentOffset;
- (void)updateSubViews:(id)a0 durations:(id)a1 startAutoScroll:(BOOL)a2;
- (long long)currentIndex;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupUI;

@end

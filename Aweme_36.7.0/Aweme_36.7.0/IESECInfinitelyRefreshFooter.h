@class NSString, IESECInfinitelyDefaultNoMoreView, UILabel, IESECInfinitelyDefaultLoadingView, NSAttributedString;

@interface IESECInfinitelyRefreshFooter : MJRefreshFooter

@property (retain, nonatomic) UILabel *idleLabel;
@property (retain, nonatomic) IESECInfinitelyDefaultLoadingView *loadingView;
@property (retain, nonatomic) IESECInfinitelyDefaultNoMoreView *noMoreView;
@property (copy, nonatomic) NSString *noMoreText;
@property (copy, nonatomic) NSString *idleText;
@property (copy, nonatomic) NSString *refreshingText;
@property (copy, nonatomic) NSAttributedString *noMoreDataAttributedText;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (nonatomic) long long refreshType;
@property (nonatomic) BOOL enableAutoRefreshingWhenNotFullScreen;
@property (nonatomic) double startRefreshOffset;

+ (unsigned long long)loadingType;
+ (void)setLoadingType:(unsigned long long)a0;
+ (id)footerWithNoMoreText:(id)a0 refreshingBlock:(id /* block */)a1 loadingType:(unsigned long long)a2 customBizHeight:(double)a3;
+ (id)footerWithNoMoreText:(id)a0 refreshingBlock:(id /* block */)a1;
+ (id)footerWithNoMoreText:(id)a0 refreshingBlock:(id /* block */)a1 loadingType:(unsigned long long)a2;
+ (void)setCustomBizHeight:(double)a0;
+ (double)customBizHeight;
+ (void)setGlobalStartRefreshOffset:(double)a0;

- (void)scrollViewContentOffsetDidChange:(id)a0;
- (void)scrollViewContentSizeDidChange:(id)a0;
- (void)scrollViewPanStateDidChange:(id)a0;
- (void)customNoMoreView:(id /* block */)a0;
- (void)customLoadingView:(id /* block */)a0;
- (void)noMoreViewClick;
- (void)updateNoMoreText:(id)a0;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;
- (void)prepare;
- (void)setState:(long long)a0;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)a0;

@end

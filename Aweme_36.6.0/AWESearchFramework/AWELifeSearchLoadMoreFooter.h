@class UIView;

@interface AWELifeSearchLoadMoreFooter : AWESearchLoadMoreFooter

@property (retain, nonatomic) UIView *leftLineView;
@property (retain, nonatomic) UIView *rightLineView;

+ (BOOL)lifeSearchLoadmoreLineHidden;

- (void)setLineViewHidden:(BOOL)a0;
- (void)configNoMoreDataText:(id)a0;
- (void).cxx_destruct;
- (void)prepare;
- (void)setState:(long long)a0;

@end

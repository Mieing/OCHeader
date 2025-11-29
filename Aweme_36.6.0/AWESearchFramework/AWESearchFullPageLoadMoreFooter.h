@class NSMutableDictionary, UIImageView, UILabel, UIView;

@interface AWESearchFullPageLoadMoreFooter : MJRefreshBackFooter

@property (retain, nonatomic) UIView *innerLabel;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *arrowImage;
@property (retain, nonatomic) NSMutableDictionary *textDictionary;
@property (nonatomic) double ignoredFullPageScrollViewContentInsetBottom;

- (void)placeSubviews;
- (void)forceUpdateUI;
- (void)scrollViewContentOffsetDidChange:(id)a0;
- (void)scrollViewContentSizeDidChange:(id)a0;
- (BOOL)scrollViewContentHeightBiggerThanFrameHeight;
- (BOOL)scrollViewDidReachBottom;
- (BOOL)scrollViewDidScrollUp;
- (id)getInnerLabel;
- (void)p_setupLabel;
- (BOOL)enableInertialBraking;
- (void).cxx_destruct;
- (void)prepare;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setState:(long long)a0;
- (void)setText:(id)a0 forState:(long long)a1;

@end

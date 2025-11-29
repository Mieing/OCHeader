@class UIColor, UIView;

@interface HTSLiveReddotButton : IESLiveButton

@property (retain, nonatomic) UIView *badge;
@property (retain, nonatomic) UIColor *reddotColor;

- (id)createBadgeWithSize:(unsigned long long)a0 trailingOffset:(double)a1;
- (void)liveSetBadgeSize:(unsigned long long)a0 trailingOffset:(double)a1;
- (void)liveSetBadgeHidden:(BOOL)a0;
- (void).cxx_destruct;

@end

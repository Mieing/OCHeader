@class NSArray, NSString, UIView;

@interface IESIMWaitingReplyLoadingView : UIView <CAAnimationDelegate>

@property (copy, nonatomic) NSArray *pointViewArr;
@property (retain, nonatomic) UIView *loadingContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beginLoadinAnimation;
- (void)removeAllAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pointCount:(long long)a1;
- (void)p_setupViewsWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pointCount:(long long)a1;
- (id)pointPositionAnimation:(unsigned long long)a0;
- (void).cxx_destruct;

@end

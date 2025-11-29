@class UIImageView, NSString;

@interface WCFinderLiveIconImageView : UIView <WCFinderLiveIconAnimationProtocol>

@property (retain, nonatomic) UIImageView *iconView;
@property (readonly, nonatomic) unsigned long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(unsigned long long)a1;
- (void)prepareForReuse;
- (void)setUpImageViewWithStyle:(unsigned long long)a0;
- (void)willMoveToWindow:(id)a0;
- (void)willMoveToSuperview:(id)a0;
- (void)layoutSubviews;
- (void)setHidden:(BOOL)a0;
- (void)startLiveAnimation;
- (void)_startLiveAnimation;
- (void).cxx_destruct;

@end

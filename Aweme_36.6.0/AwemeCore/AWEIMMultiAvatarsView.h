@class UIImageView, UIView;

@interface AWEIMMultiAvatarsView : UIImageView

@property (nonatomic) double width;
@property (nonatomic) BOOL isNotch;
@property (nonatomic) double notchWidth;
@property (nonatomic) double centerRate;
@property (retain, nonatomic) UIView *bgMaskView;
@property (retain, nonatomic) UIImageView *moreView;

- (void)__setupUI;
- (id)initWithWidth:(double)a0 isNotch:(BOOL)a1 notchWidth:(double)a2 centerRate:(double)a3;
- (void)updateLayer;
- (void).cxx_destruct;
- (void)updateWithStyle:(unsigned long long)a0;

@end

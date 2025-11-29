@class UIView;

@interface WeakViewBox : NSObject

@property (weak, nonatomic) UIView *view;
@property (nonatomic) BOOL isAdjusting;

+ (id)view:(id)a0;

- (BOOL)isInvisible;
- (void)adjustOffset:(struct CGPoint { double x0; double x1; })a0 causeOf:(id)a1 animated:(BOOL)a2;
- (void).cxx_destruct;

@end

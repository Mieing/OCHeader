@class DUXToast, UIView;

@interface DUXToastInterceptorInfo : NSObject

@property (weak, nonatomic) DUXToast *toast;
@property (weak, nonatomic) UIView *host;
@property (nonatomic) struct CGPoint { double x; double y; } centerPoint;
@property (nonatomic) BOOL isWindowSize;

- (id)initWithToast:(id)a0 host:(id)a1 centerPoint:(struct CGPoint { double x0; double x1; })a2 isWindowSize:(BOOL)a3;
- (void).cxx_destruct;

@end

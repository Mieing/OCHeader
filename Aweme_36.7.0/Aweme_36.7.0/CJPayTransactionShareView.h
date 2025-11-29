@class UIViewController, UIView;

@interface CJPayTransactionShareView : NSObject

@property (retain, nonatomic) UIViewController *fromVC;
@property (retain, nonatomic) UIViewController *toVC;
@property (retain, nonatomic) UIView *fromView;
@property (retain, nonatomic) UIView *toView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } fromFinalFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } toFinalFrame;

- (void).cxx_destruct;
- (id)initWith:(id)a0;

@end

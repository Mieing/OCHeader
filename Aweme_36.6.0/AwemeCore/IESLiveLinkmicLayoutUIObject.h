@class NSValue;

@interface IESLiveLinkmicLayoutUIObject : NSObject

@property (retain, nonatomic) NSValue *frameValue;
@property (retain, nonatomic) NSValue *insetValue;

+ (id)wrapWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
+ (id)wrapWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (void).cxx_destruct;
- (id)description;

@end

@class UIColor, NSString, UIView, UIButton;

@interface WAMapCalloutView : UIView <QAnnotationViewCollisionDelegate>

@property (retain, nonatomic) UIButton *btn;
@property (retain, nonatomic) UIButton *btnBig;
@property (retain, nonatomic) UIView *targetCalloutCoverView;
@property (retain, nonatomic) UIColor *bgColor;
@property (nonatomic) double radius;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) double margin;
@property (nonatomic) struct CGSize { double width; double height; } textSize;
@property (nonatomic) double arrowLen;
@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) double shadowOffsetX;
@property (nonatomic) double shadowOffsetY;
@property (nonatomic) double shadowBlurRadius;
@property (nonatomic) unsigned long long collisionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawInContext:(struct CGContext { } *)a0;
- (id)initWithParam:(id)a0;
- (id)initWithParam:(id)a0 view:(id)a1;
- (void)addTarget:(id)a0 action:(SEL)a1 forControlEvents:(unsigned long long)a2;
- (void).cxx_destruct;

@end

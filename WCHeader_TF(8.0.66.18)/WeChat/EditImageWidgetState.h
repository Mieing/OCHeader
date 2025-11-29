@class UIColor;

@interface EditImageWidgetState : NSObject <NSCoding, NSCopying>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } canvasFrame;
@property (nonatomic) unsigned long long widgetEditImageUIStyle;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } widgetFrame;
@property (nonatomic) struct CGPoint { double x; double y; } widgetCenter;
@property (nonatomic) struct CGPoint { double x; double y; } widgetAnchor;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } widgetTransform;
@property (retain, nonatomic) UIColor *widgetBackgroundColor;
@property (retain, nonatomic) UIColor *widgetShadowColor;
@property (nonatomic) struct CGSize { double width; double height; } widgetShadowOffset;
@property (nonatomic) double widgetOpacity;
@property (nonatomic) double widgetViewRadius;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end

@class UIColor, NSString, CAShapeLayer, UIBezierPath, UIImageView;

@interface AWEUGPendantEdgeView : UIView <AWEUGPendantEdgeProtocol> {
    CAShapeLayer *backGroundLayer;
    UIBezierPath *backGroundPath;
    UIImageView *arrowIcon;
}

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) UIColor *bgColor;
@property (retain, nonatomic) UIColor *borderColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performUpdateToState:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end

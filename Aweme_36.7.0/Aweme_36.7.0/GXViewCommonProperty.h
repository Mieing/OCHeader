@class UIView, GXTrack, NSString, UIImage, GXNode, CAShapeLayer, UIVisualEffectView, GXEvent;

@interface GXViewCommonProperty : NSObject

@property (retain, nonatomic) GXNode *gxNode;
@property (retain, nonatomic) GXEvent *gxEvent;
@property (retain, nonatomic) GXTrack *gxTrack;
@property (copy, nonatomic) NSString *gxBizId;
@property (copy, nonatomic) NSString *gxNodeId;
@property (copy, nonatomic) NSString *gxTemplateId;
@property (copy, nonatomic) NSString *gxTemplateVersion;
@property (copy, nonatomic) NSString *gxLinearGradient;
@property (retain, nonatomic) UIView *gxGradientView;
@property (retain, nonatomic) UIImage *gxGradientImage;
@property (nonatomic) struct GXCornerRadius_t { double topLeft; double topRight; double bottomLeft; double bottomRight; } gxCornerRadius;
@property (retain, nonatomic) CAShapeLayer *gxBorderLayer;
@property (retain, nonatomic) CAShapeLayer *shadowLayer;
@property (retain, nonatomic) UIVisualEffectView *blurView;

- (void)gx_handleGesture:(id)a0;
- (void).cxx_destruct;

@end

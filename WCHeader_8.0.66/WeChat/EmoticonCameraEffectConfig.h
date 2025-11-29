@class CALayer, XEffectEffectManager;

@interface EmoticonCameraEffectConfig : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropFrame;
@property (retain, nonatomic) XEffectEffectManager *effectMgr;
@property (retain, nonatomic) CALayer *overlayLayer;

- (void).cxx_destruct;

@end

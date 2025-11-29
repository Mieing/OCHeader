@class UIColor;

@interface BDASplashBreathModel : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } startFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } endFrame;
@property (retain, nonatomic) UIColor *breathColor;
@property (nonatomic) double startRadius;
@property (nonatomic) double endRadius;
@property (nonatomic) double delay;
@property (nonatomic) long long instanceCount;
@property (nonatomic) double instanceDelay;
@property (nonatomic) double duration;

- (id)getBreathLayer;
- (void).cxx_destruct;

@end

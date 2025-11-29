@class NSString;

@interface AWEAllScreenAdaptionStaticBlurView : UIVisualEffectView <ALMIESVideoPlayerExtraViewProtocol>

@property (nonatomic) long long positionType;
@property (nonatomic) double xRelativeProportion;
@property (nonatomic) double yRelativeProportion;
@property (nonatomic) double widthRelaiveProportion;
@property (nonatomic) double heightRelativeProportion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPosition:(BOOL)a0 blurStartRatio:(double)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

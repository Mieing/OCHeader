@class AVPlayer, NSString, NSLayoutConstraint, MTKView;

@interface TAVMediaMetalView : UIView <TAVMediaViewProtocol>

@property (retain, nonatomic) MTKView *mtkView;
@property (retain, nonatomic) NSLayoutConstraint *widthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *centerXConstraint;
@property (retain, nonatomic) NSLayoutConstraint *centerYConstraint;
@property (nonatomic) struct CGSize { double width; double height; } nextMTKViewSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } videoRect;
@property (nonatomic, getter=isReadyForDisplay) BOOL readyForDisplay;
@property (weak, nonatomic) AVPlayer *player;
@property (nonatomic) unsigned long long fillMode;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) BOOL shouldAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requiresConstraintBasedLayout;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraintsAnimation;
- (void)updateInputTextureSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateConstraints;
- (void)refreshView;
- (void).cxx_destruct;

@end

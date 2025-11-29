@class NSTimer, BDSCImageView, UITapGestureRecognizer, NSArray, NSString, CAShapeLayer, BDSCPendantConfig, BDSCastIndicatorView, UIPanGestureRecognizer, UILabel;
@protocol BDSCPendantViewDelegate;

@interface BDSCPendantView : UIView <BDSCPendantProtocol>

@property (retain, nonatomic) BDSCPendantConfig *config;
@property (nonatomic) struct CGPoint { double x; double y; } touchStartPoint;
@property (nonatomic) struct CGPoint { double x; double y; } viewStartPoint;
@property (nonatomic) long long position;
@property (nonatomic) BOOL isMoving;
@property (nonatomic) BOOL hasShownExpandedState;
@property (copy, nonatomic) NSArray *forbiddenAttachmentAreas;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) CAShapeLayer *borderLayer;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) BDSCImageView *imageView;
@property (retain, nonatomic) UILabel *castingLabel;
@property (retain, nonatomic) BDSCastIndicatorView *castIndicatorView;
@property (nonatomic) BOOL showCastingLabel;
@property (nonatomic) BOOL supportsStatusChange;
@property (nonatomic) BOOL isAutoRemovePendant;
@property (retain, nonatomic) NSTimer *disconnectTimer;
@property (weak, nonatomic) id<BDSCPendantViewDelegate> delegate;
@property (nonatomic) long long connectionStatus;
@property (nonatomic) BOOL draggable;
@property (nonatomic) double attachmentAnimationDuration;
@property (copy, nonatomic) id /* block */ tapHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removePendant;
- (void)setupPendantView;
- (void)updateForbiddenAttachmentAreas:(id)a0;
- (id)tvIconImage;
- (id)tvDisconnectIconImage;
- (void)changeMoveState:(BOOL)a0;
- (void)configBorderLayers;
- (struct CGPoint { double x0; double x1; })calculateCenter;
- (void)triggerShrinkAnimationWithCompletion:(id /* block */)a0;
- (void)setupInitialState;
- (void)setupUIComponents;
- (void)configureDefaultProperties;
- (void)showCastIndicator;
- (void)resetDisconnectTimer;
- (double)adjustYPositionIfInForbiddenArea:(double)a0 halfHeight:(double)a1 superviewHeight:(double)a2;
- (void)attachToEdge;
- (void)cancelDisconnectTimer;
- (void)hideCastIndicator;
- (void)startDisconnectTimer;
- (double)castIndicatorRadius;
- (void)updateCastIndicatorLayout;
- (void)resetToDefaultPosition;
- (void)layoutSublayersOfLayer:(id)a0;
- (void).cxx_destruct;
- (void)removeFromSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithConfig:(id)a0;
- (void)tapGestureRecognized:(id)a0;
- (void)panGestureRecognized:(id)a0;
- (void)setupGestureRecognizers;

@end

@class UIColor, CAReplicatorLayer, NSString;

@interface BDASplashSheoBreathView : UIView <BDSHCustomComponentProtocol>

@property (nonatomic) double delay;
@property (retain, nonatomic) UIColor *breathColor;
@property (nonatomic) long long instanceCount;
@property (nonatomic) double instanceDelay;
@property (nonatomic) double duration;
@property (nonatomic) double topSize;
@property (nonatomic) double leftSize;
@property (nonatomic) double bottomSize;
@property (nonatomic) double rightSize;
@property (retain, nonatomic) CAReplicatorLayer *breathLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)releaseComponent;
- (void)onComponentCreated;
- (id)getContentView;
- (id)initWithExtra:(id)a0;
- (void)loadBreathAnimation;
- (void)p_setupWithExtra:(id)a0;
- (void).cxx_destruct;

@end

@class NSString, IESECLiveAnimateImageView;

@interface IESECLiveStateAnimationView : UIView <IESECLiveStateAnimationProtocol>

@property (retain, nonatomic) IESECLiveAnimateImageView *animationView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAnimationViewData:(id)a0;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (void)stopAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)applicationDidEnterBackground:(id)a0;
- (void)dealloc;
- (void)beginAnimation;

@end

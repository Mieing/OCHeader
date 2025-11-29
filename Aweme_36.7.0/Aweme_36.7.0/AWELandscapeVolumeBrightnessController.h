@class NSString, AWELandscapeVolumeBrightnessControlView;

@interface AWELandscapeVolumeBrightnessController : AWELandscapeInteractionBaseController <AWELandscapeVolumeBrightnessDelegate>

@property (retain, nonatomic) AWELandscapeVolumeBrightnessControlView *volumeBrightnessView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)interactionViewState;
- (BOOL)shouldResponseGestureRecognizer:(id)a0;
- (BOOL)handleResponseGestureRecognizer:(id)a0;
- (BOOL)shouldReceiveGestureRecognizer:(id)a0 touch:(id)a1;
- (void)willExitLandscape;
- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (BOOL)isInteractive;
- (BOOL)isInteracting;
- (void)reset;
- (void)viewDidLoad;

@end

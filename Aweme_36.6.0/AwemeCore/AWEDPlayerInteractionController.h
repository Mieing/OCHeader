@class NSTimer, NSString;

@interface AWEDPlayerInteractionController : AWEDPlayerInteractionBaseController <AWEDPlayerInteractionControllerProtocol>

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSTimer *quietTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)activateType;
- (void)afterSetData:(id)a0;
- (BOOL)shouldResponseGestureRecognizer:(id)a0;
- (BOOL)handleResponseGestureRecognizer:(id)a0;
- (void)updateDPlayerState:(unsigned long long)a0;
- (void)changeInteractionToState:(unsigned long long)a0 animated:(BOOL)a1;
- (void)changeInteractionToState:(unsigned long long)a0;
- (void)triggerQuietTimerWithState:(unsigned long long)a0;
- (void)resetQuietTimer;
- (BOOL)singleTapEnableEnterQuiteMode;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (void)containerViewDidLoad;

@end

@class NSTimer;

@interface IESLiveLoginGuideFragment : IESLiveRoomComponent

@property (retain, nonatomic) NSTimer *countDownTimer;
@property (nonatomic) BOOL openedLoginView;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)addLoginObserver;
- (void)showGuideLoginView:(id)a0;
- (void).cxx_destruct;

@end

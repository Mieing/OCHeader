@class NSString, NSDictionary, AWEAwemeModel, UIView, UIViewController;

@interface AWELiveFloatOnTopManager : AWEMediaFloatOnTopManager <AWELiveRoomMessage, AWELiveFloatOnTopManagerProtocol>

@property (weak, nonatomic) UIViewController *onViewController;
@property (weak, nonatomic) UIViewController *fromViewController;
@property (retain, nonatomic) AWEAwemeModel *liveModel;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (weak, nonatomic) UIView *backToLiveView;
@property (nonatomic) BOOL showed;
@property (copy, nonatomic) NSDictionary *showLogExtra;
@property (copy, nonatomic) id /* block */ tapAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *containerView;

+ (id)playLiveOnViewController:(id)a0 fromViewController:(id)a1 logExtra:(id)a2;
+ (void)pauseAll;

- (void)audienceQuitAllRoom;
- (void)dismissWithParams:(id)a0;
- (void)handlePauseNotification;
- (void)muteLive:(BOOL)a0;
- (void)addBackToLiveToastOnce;
- (void)showLiveEndMessage;
- (void)dismissToast;
- (void).cxx_destruct;
- (id)init;
- (void)detach;
- (void)attach;
- (void)dealloc;
- (void)handleTap;

@end

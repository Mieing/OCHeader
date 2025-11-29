@class NSString, UIImageView, NSTimer, UIView, NSNumber;
@protocol IESLiveRoomService;

@interface AWELiveMinimizeToTopLiveMananger : NSObject <CAAnimationDelegate, IESLiveRoomPopService, AWELiveRoomMinimizeProtocol>

@property (retain, nonatomic) UIView *screenShotView;
@property (retain, nonatomic) NSNumber *toRoomID;
@property (retain, nonatomic) UIView *avatarView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *liveMarkView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *reddot;
@property (weak, nonatomic) UIView *targetView;
@property (weak, nonatomic) UIView *holderView;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) NSTimer *roomCheckTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)checkRoomStatus;
- (void)trackMinimizeRedPointShow;
- (BOOL)liveEnableMinimizeBackGes;
- (BOOL)minimizeEnableRedPoint;
- (double)minimizeRedPointShowDuration;
- (void)setReddotHiddenStatus:(BOOL)a0;
- (void)playAvatarAnimation:(id)a0;
- (void)removeMinimizeAnimation;
- (void)clearRoom;
- (void)invalidateRoomCheckTimerIfNeeded;
- (void)minimizeRoomWithScreenshot:(id)a0 room:(id)a1 animated:(BOOL)a2 progress:(double)a3 completion:(id /* block */)a4;
- (BOOL)isLiveEntranceInVC:(id)a0;
- (void)removeReddot;
- (BOOL)hasMinimizedRoom;
- (void)startRoomCheckTimerIfNeeded;
- (void)setMinimizeHoldView:(id)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)init;
- (void)dealloc;

@end

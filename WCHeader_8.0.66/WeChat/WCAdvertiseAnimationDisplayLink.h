@class NSMutableArray, CADisplayLink;
@protocol WCAdvertiseAnimationDisplayLinkDelegate;

@interface WCAdvertiseAnimationDisplayLink : NSObject

@property (retain, nonatomic) CADisplayLink *animationLink;
@property (retain, nonatomic) NSMutableArray *animationObjects;
@property (nonatomic) double timestamp;
@property (nonatomic) double animationCurrentTime;
@property (weak, nonatomic) id<WCAdvertiseAnimationDisplayLinkDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)addNotifications;
- (void)onDidEnterBackground;
- (void)addAnimationObject:(id)a0;
- (void)startAnimations;
- (void)stopAnimations;
- (void)resetAnimations;
- (void)terminateAnimations;
- (void)persistAnimations;
- (void)persistAnimation:(id)a0;
- (void)tryToTerminateAnimations;
- (void)handleDisplayLinkEvent:(id)a0;
- (void)noticeAnimationFinishedEvent:(id)a0;
- (void).cxx_destruct;

@end

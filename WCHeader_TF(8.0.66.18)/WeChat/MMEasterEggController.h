@class MMEasterEggActivityChatReportObject, NSString, MMEasterEggMatch, NSMutableArray, MMEasterEggEffect;
@protocol MMEasterEggControllerDelegate, MMEasterEggActivity;

@interface MMEasterEggController : MMObject <MMEasterEggActivityDelegate, MMEasterEggEffectDelegateImplicitAnimation>

@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) MMEasterEggMatch *eggMatch;
@property (retain, nonatomic) MMEasterEggEffect *effect;
@property (retain, nonatomic) id<MMEasterEggActivity> activity;
@property (retain, nonatomic) MMEasterEggActivityChatReportObject *reportObject;
@property (retain, nonatomic) NSMutableArray *pendingMsgs;
@property (weak, nonatomic) id<MMEasterEggControllerDelegate> delegate;
@property (retain, nonatomic) NSString *chatUsername;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)startEasterEggWithBatchMessages:(id)a0;
- (void)startEasterEggWithMessage:(id)a0;
- (BOOL)canMessageTypeShowEgg:(id)a0;
- (void)tryResumeCheckEasterEgg;
- (void)reset;
- (void)stopEasterEgg;
- (void)stopEasterEggWithReason:(unsigned int)a0;
- (BOOL)privateStartEasterEggWithMessage:(id)a0 isSender:(BOOL)a1;
- (id)getEffectParentView;
- (double)getEffectParentViewTopInset;
- (void)onTapInteractiveUI;
- (void)onEffectEnd;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getViewBoundsForAnimationType:(long long)a0;
- (void)showInteractiveUIWithReportString:(id)a0;
- (id)getViewController;
- (long long)getEffectType;
- (id)getExtInfo;
- (void).cxx_destruct;

@end

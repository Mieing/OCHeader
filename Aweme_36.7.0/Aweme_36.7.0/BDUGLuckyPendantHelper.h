@class BDUGLuckyPendantPositionModel, NSString, UIView, NSMutableArray, NSLock;
@protocol BDUGLuckyPendantViewProtocol, BDUGLuckyTimerTaskContextProtocol;

@interface BDUGLuckyPendantHelper : NSObject <BDUGLuckyPendantTaskProtocol, BDUGLuckyPendantProtocol, BDUGLuckyTimerRuleListenerProtocol, BDUGLuckyPendantViewDelegate>

@property (retain, nonatomic) NSMutableArray *satisfiedRules;
@property (retain, nonatomic) NSMutableArray *scenes;
@property (retain, nonatomic) id<BDUGLuckyTimerTaskContextProtocol> context;
@property (retain, nonatomic) UIView<BDUGLuckyPendantViewProtocol> *pendant;
@property (copy, nonatomic) NSString *observerKey;
@property (retain, nonatomic) BDUGLuckyPendantPositionModel *clientPendantPosition;
@property (nonatomic) BOOL hasTrackedShowEvent;
@property (weak, nonatomic) UIView *pendantSuperView;
@property (retain, nonatomic) NSLock *pendantSuperViewLock;
@property (readonly, nonatomic) BOOL pendantShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__addPendant;
- (id)__topView;
- (void)removePendant;
- (void)__updatePendantPosition;
- (BOOL)canShowPendant;
- (void)showPendant;
- (id)pendantStyle;
- (void)enter:(id)a0 superView:(id)a1 extra:(id)a2;
- (void)leave:(id)a0 superView:(id)a1 extra:(id)a2;
- (void)onSatisfiedRule:(id)a0;
- (void)onDissatisfiedRule:(id)a0;
- (void)__addObserver;
- (void)__updatePendantPosition:(id)a0;
- (void)__updatePendantShowStatus;
- (void)__trackPendantShowEventIfNeeded;
- (void)onReceivePendantDestroyEvent;
- (void)updatePendantPositionIfNeeded;
- (void)reorderPendantPriority;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end

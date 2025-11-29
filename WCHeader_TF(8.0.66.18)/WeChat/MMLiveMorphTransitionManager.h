@class NSString, NSMutableDictionary;

@interface MMLiveMorphTransitionManager : MMUserService <MMServiceProtocol>

@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) NSMutableDictionary *transitionContext;
@property (nonatomic) unsigned long long mode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)findDismissTargetVCWithTopVC:(id)a0;

- (void)prepareTransitionInMode:(unsigned long long)a0;
- (void)setTransitionContextItem:(id)a0 withKey:(id)a1;
- (id)transitionContextItemWithKey:(id)a0;
- (void)notifyTransitionStartedWithDuration:(double)a0;
- (void)notifyTransitionEnding;
- (void)endTransition;
- (void)cancelTransition;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)resetState;
- (void)onPreparationTimeout;
- (void).cxx_destruct;

@end

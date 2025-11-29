@class NSPointerArray, IESLLPendantWindow, NSArray, IESLLPendantContainerView, IESLLPendantTimer, IESLLPendantResult, NSString;

@interface IESLLPendantManager : NSObject <IESLLRouterDelegate>

@property (nonatomic) long long vcStackStatus;
@property (retain, nonatomic) IESLLPendantWindow *pendantWindow;
@property (retain, nonatomic) IESLLPendantContainerView *containerView;
@property (retain, nonatomic) IESLLPendantTimer *pendantTimer;
@property (retain, nonatomic) IESLLPendantResult *pendantInfo;
@property (retain, nonatomic) NSArray *currentPendantRules;
@property (retain, nonatomic) NSArray *currentPendantIgnoreRules;
@property (retain, nonatomic) NSString *currentShowGrowthCoinPendant;
@property (retain, nonatomic) NSString *currentGrowthBizData;
@property (retain, nonatomic) NSPointerArray *vcStack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)routerDidTransferWithURLString:(id)a0 fromViewController:(id)a1 toViewController:(id)a2 transitionType:(long long)a3;
- (void)routerDidTransferWithURLString:(id)a0 toViewController:(id)a1;
- (void)addPendantCloseEvent;
- (void)safeRemoveObjectsNotInUITree;
- (id)topStackElement;
- (void)updatePendantContainerStateWithViewController:(id)a0;
- (void)mainThreadTask:(id /* block */)a0;
- (void)postPendantLifeCycle:(long long)a0 vc:(id)a1;
- (void)clearCoinFlagCache;
- (BOOL)checkEntryConditionWithUrl:(id)a0;
- (BOOL)checkIsFirstInWithUrl:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })generateResultWithNetworkResult:(id)a0;
- (double)marginWithNetworkResult:(id)a0;
- (void)fetchPendantInfoWithUrl:(id)a0 complete:(id /* block */)a1;
- (BOOL)checkMatchRuleWithUrl:(id)a0;
- (void)checkPendantStatusWithUrl:(id)a0 targetViewController:(id)a1;
- (void)needRefreshWindow;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)resetContext;
- (void)restartTimer;

@end

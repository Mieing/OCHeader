@class NSArray;

@interface AWEHPTabGuidePizzaAccessManager : NSObject

@property (retain, nonatomic) NSArray *limitLabels;
@property (retain, nonatomic) NSArray *limitButtons;

+ (id)pizzaEngine;
+ (id)sharedInstance;

- (id)getHPTabGuideLimitComponentInfo;
- (void)startPizzaVerifyWithComponentID:(id)a0 completion:(id /* block */)a1;
- (void)addNotifications;
- (void)updateTabGuideComponentVerifyResult;
- (void)updatePizzaCheckResultWithCandidate:(id)a0;
- (void)startPizzaVerifyWithAwemeList:(id)a0 enterFrom:(id)a1 completion:(id /* block */)a2;
- (id)generateComponentWithComponentID:(id)a0;
- (void)handleLabelShow:(id)a0;
- (void)handleButtonShow:(id)a0;
- (void)p_startPizzaVerifyWithAweme:(id)a0 enterFrom:(id)a1 completion:(id /* block */)a2;
- (void)p_startPizzaVerifyWithCandidate:(id)a0 completion:(id /* block */)a1;
- (void)p_updateLabelVerifyResult;
- (void)p_updateButtonVerifyResult;
- (void)p_startPizzaVerifyWithComponent:(id)a0 completion:(id /* block */)a1;
- (void)p_startPizzaVerifyWithCandidateList:(id)a0 completion:(id /* block */)a1;
- (void)p_startPizzaVerifyWithComponentType:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)removeNotifications;

@end

@class NSDictionary, IESLivePEDecisionService, NSString;

@interface IESLiveStableModeDecisionCenter : NSObject <IESLivePEDecisionObserver, IESLiveAnchorPFStateObserver>

@property (retain, nonatomic) IESLivePEDecisionService *decisionEngine;
@property (nonatomic) long long currentDecisionLevel;
@property (retain, nonatomic) NSDictionary *factorThresholds;
@property (nonatomic) long long anchorMemoryHighCount;
@property (nonatomic) long long anchorMemoryLowCount;
@property (nonatomic) long long anchorStreamFpsHighCount;
@property (nonatomic) long long anchorStreamFpsMiddleCount;
@property (nonatomic) long long anchorStreamFpsLowCount;
@property (copy, nonatomic) id /* block */ decisionResultBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stallStateDidChange:(long long)a0;
- (void)memoryStateDidChange:(long long)a0;
- (void)decision:(id)a0 result:(id)a1;
- (void)collectGlobalFactors;
- (void)resetAnchorFactorCount;
- (void)setupWithFactorThresholds:(id)a0;
- (void)startCollectFactors;
- (void).cxx_destruct;
- (void)destroy;

@end

@class NSString;

@interface AWERequestQuestionnaireControlStrategy : NSObject <AWEFrequencyControlStrategyProtocol>

@property (copy, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateIdentity;
- (void)triggerFrequencyControl:(id /* block */)a0;
- (void)shouldDelayToPerformAction:(id /* block */)a0;
- (BOOL)coldStartTagInvalid;
- (id)coldTimeLag;
- (BOOL)lastTimeIntervalInvalid;
- (id)controlKey;
- (id)lastTimeLag;
- (void).cxx_destruct;

@end

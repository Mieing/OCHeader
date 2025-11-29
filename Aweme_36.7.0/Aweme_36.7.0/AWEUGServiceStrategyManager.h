@class NSString, NSMutableDictionary;

@interface AWEUGServiceStrategyManager : NSObject <NunkiMessage>

@property (retain, nonatomic) NSMutableDictionary *strategyExecutors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstanced;

- (void)didReceiveTrigger:(id)a0 triggerContext:(id)a1 strategys:(id)a2;
- (void)registerStrategyScene:(id)a0 excutor:(id)a1;
- (void)unregisterStrategyScene:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

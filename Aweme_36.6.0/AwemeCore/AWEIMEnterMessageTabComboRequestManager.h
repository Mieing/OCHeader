@class NSString, NSMutableDictionary;

@interface AWEIMEnterMessageTabComboRequestManager : AWEIMComponentBase <AWEIMEnterMessageTabComboRequestManagerInterface, AWEUserMessage>

@property (retain, nonatomic) NSMutableDictionary *businessDict;
@property (nonatomic) double limitedUntilTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)onTabBarDidChangeNotification:(id)a0;
- (void)registerBusinessRequestHandler:(id)a0;
- (double)p_getFrequencyControlTime;
- (void)doComboRequestIfNecessaryWithFrequencyControl:(BOOL)a0;
- (void)p_updateFrequencyControlTime:(long long)a0;
- (void)doComboRequestWithFrequencyControl:(BOOL)a0;
- (void)onApplicationDidBecomeActiveNotification;
- (void)p_setFrequencyControlTime:(double)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addObservers;
- (id)requestParams;

@end

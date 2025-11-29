@class AWEHPHambManager, MMKV, NSString, NSNumber;

@interface AWEHPHambModuleService : HTSService <AWEHPHambModuleService>

@property (retain, nonatomic) AWEHPHambManager *hambManager;
@property (retain, nonatomic) NSNumber *combineResponseVersion;
@property (retain, nonatomic) MMKV *mmkv;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getConfigWithNames:(id)a0;
- (void)addChecker:(id)a0;
- (double)lastValidCombineResponseVersion;
- (void)updateLastValidCombineResponseVersion:(double)a0;
- (void)removeListener:(id)a0;
- (void).cxx_destruct;
- (void)addListener:(id)a0;

@end

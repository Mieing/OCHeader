@class NSNumber, NSMutableArray;

@interface IESLLAbilityProbeManager : NSObject

@property (retain, nonatomic) NSNumber *abilityEnable;
@property (retain, nonatomic) NSMutableArray *abilityList;

+ (id)sharedManager;

- (BOOL)isAbilityService:(id)a0;
- (id)abilityListInfo;
- (void)scanAbilityProbe;
- (void)loadRemoteAbilityList;
- (void)addAbilityByList:(id)a0 abilityKey:(id)a1;
- (BOOL)verifyString:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

@class NSMutableDictionary, NSSet, NSMutableSet, NSDictionary, NSMutableArray;

@interface IESLiveEffectConflictProcessModel : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableDictionary *sceneAppliedEffects;
@property (retain, nonatomic) NSMutableSet *realAppliedScene;
@property (retain, nonatomic) NSMutableArray *sceneApplySequence;
@property (retain, nonatomic) NSSet *moduleResumeRules;
@property (retain, nonatomic) NSSet *moduleConflictRules;
@property (retain, nonatomic) NSSet *effectConflictRules;
@property (retain, nonatomic) NSDictionary *sceneToModuleDict;
@property (retain, nonatomic) NSMutableDictionary *intensityDict;
@property (retain, nonatomic) NSMutableDictionary *tagsDict;
@property (retain, nonatomic) NSDictionary *updatedStatus;

+ (id)keyForEffect:(id)a0 tag:(id)a1;
+ (id)stringForStatus:(long long)a0;

- (void)transToLiveStatus;
- (id)moduleForScene:(long long)a0;
- (BOOL)checkSceneConflictCurScene:(long long)a0 conflictScene:(long long)a1;
- (BOOL)shouldResumeAfterConflict:(long long)a0 resumeScene:(long long)a1;
- (id)effectsAppendSuffix:(id)a0 isApply:(BOOL)a1;
- (void)removeSceneInfo:(long long)a0;
- (BOOL)checkSceneConflictByRealAppliedEffects:(long long)a0;
- (id)ruleDictToRuleSet:(id)a0;
- (id)keyForModule:(id)a0 conflictModule:(id)a1;
- (BOOL)sceneIsApplied:(long long)a0;
- (BOOL)checkGiftConflictCurScene:(long long)a0 conflictScene:(long long)a1;
- (BOOL)checkEffectGiftConflictCurScene:(long long)a0 conflictScene:(long long)a1;
- (long long)repelValueForScene:(long long)a0;
- (void)updateEffect:(id)a0 tag:(id)a1 value:(double)a2;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

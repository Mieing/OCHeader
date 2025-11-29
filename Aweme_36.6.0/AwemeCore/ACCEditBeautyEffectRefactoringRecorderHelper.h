@interface ACCEditBeautyEffectRefactoringRecorderHelper : NSObject

+ (BOOL)shouldUseComposerParams;
+ (BOOL)p_boolForKey:(id)a0;
+ (BOOL)enableBeautyRefactoring;
+ (BOOL)isGenderRecoginitionOptimizationOn;
+ (BOOL)shouldSidebarUseSwitch;
+ (double)effectRatioAfterReductionForMale;
+ (BOOL)isMaleBeautyAutoOffOnce;
+ (void)markMaleBeautyHavingBeenAutoOff;
+ (id)region;
+ (long long)abGroup;
+ (BOOL)isMigrationEnabled;
+ (id)panelName;

@end

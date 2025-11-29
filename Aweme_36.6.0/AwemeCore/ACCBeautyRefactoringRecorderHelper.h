@interface ACCBeautyRefactoringRecorderHelper : NSObject

+ (BOOL)shouldUseComposerParams;
+ (BOOL)p_boolForKey:(id)a0;
+ (BOOL)enableBeautyRefactoring;
+ (BOOL)isGenderRecoginitionOptimizationOn;
+ (BOOL)shouldSidebarUseSwitch;
+ (double)effectRatioAfterReductionForMale;
+ (BOOL)isMaleBeautyAutoOffOnce;
+ (void)markMaleBeautyHavingBeenAutoOff;
+ (id)generateBeautyDataFilterConfigWith:(long long)a0 lokiId:(id)a1;
+ (long long)abGroup;
+ (BOOL)isMigrationEnabled;

@end

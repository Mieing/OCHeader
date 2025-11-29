@class NSString;

@interface AWELongPressPanelABSettings : NSObject <AWELongPressPanelABSettings>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableReplaceSpeedStyle;
+ (id)newSpeedArray;
+ (BOOL)enableSpeedOptimize;
+ (BOOL)isLppFunctionConfigSceneListContainsLocalMediaWithReferString:(id)a0;
+ (BOOL)isLppFunctionConfigSceneListContainsDefault;
+ (BOOL)isLppSearchLongPressPanelSceneListContainsInnerWithReferString:(id)a0;
+ (BOOL)themeEnable;
+ (BOOL)needInitialHiddenAirplane;
+ (id)longPressPanelSpeedOptimizeConfig;
+ (unsigned long long)speedNewStyle;
+ (id)lppFunctionConfigSceneListV2;
+ (id)lppFunctionConfigSceneList;
+ (id)lppFunctionCommonConfigSceneListV1;
+ (id)lppSearchLongPressPanelSceneList;
+ (BOOL)needShowCreateGroupChat;
+ (BOOL)enlargeCellTitle;
+ (double)spreadDuration;
+ (double)spreadDurationForLive;
+ (BOOL)longPressShowWithoutImpact;
+ (int)longPressPanelBigFontAdaptMode;
+ (BOOL)enableLppJXDiffConfig;
+ (BOOL)isLppFunctionConfigSceneListContainsScenes:(id)a0;
+ (BOOL)isLppSearchLongPressPanelSceneListContainsOuterWithReferString:(id)a0;
+ (long long)lppFunctionConfigStyle;
+ (id)lppFunctionReverseConfigSceneList;
+ (id)lppFunctionReverseConfigFunctionList;
+ (id)lppUpdatedInteractionFunctionBlackList;
+ (BOOL)enableLppRightDragToDismiss;
+ (BOOL)lppCleanInteractionForPlayControl;
+ (id)lppStyleForPlayControlHeightConfig;
+ (BOOL)naviItemOpt;
+ (BOOL)lppStyleForPlayControl;
+ (unsigned long long)modernLongPressPanelStyleMode;


@end

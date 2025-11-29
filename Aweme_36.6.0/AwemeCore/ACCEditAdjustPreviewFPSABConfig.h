@interface ACCEditAdjustPreviewFPSABConfig : NSObject

+ (BOOL)enableAdjustPreviewFPSForAdvanceEditor;
+ (BOOL)enablePerformanceDynamicAdjustForAdvanceEditor;
+ (BOOL)enableAdjustPreviewFPSForEditPage;
+ (BOOL)enableAdjustAccordingDynamicChangeForAdvanceEditor;
+ (double)adjustPreviewFPSUpperLimitValueForAdvanceEditor;
+ (id)performanceDynamicAdjustConfigForAdvanceEditor;
+ (BOOL)shouldUnionAdjustFPSMethod;
+ (id)advanceEditorAdjustPreviewFPSConfig;
+ (id)buildAdvanceEditorSortedDynamicConfig;
+ (id)editPageAdjustPreviewFPSConfig;
+ (id)performanceDynamicAdjustConfigForEditPage;
+ (id)buildEditPageSortedDynamicConfig;
+ (BOOL)enablePerformanceDynamicAdjustForEditPage;
+ (BOOL)enableAdjustAccordingDynamicChangeForEditPage;
+ (double)adjustPreviewFPSUpperLimitValueForEditPage;

@end

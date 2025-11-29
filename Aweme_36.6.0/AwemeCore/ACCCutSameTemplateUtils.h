@interface ACCCutSameTemplateUtils : NSObject

+ (BOOL)canSupportFeatureBits:(id)a0;
+ (id)createImageTemplateWithFragment:(id)a0;
+ (id)createVideoTemplateWithFragment:(id)a0;
+ (id)createTemplateWithFragment:(id)a0;
+ (id)createImageFragmentWithData:(id)a0 asset:(id)a1;
+ (id)createVideoFragmentWithData:(id)a0 asset:(id)a1;
+ (id)calculateCorrectCrops:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 withSize:(struct CGSize { double x0; double x1; })a2;
+ (id)cutSameTemplateDraftPath;
+ (void)clearAllTemplateDraft;

@end

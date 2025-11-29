@interface AWEPublishUtils : NSObject

+ (id)finalImageUploadResultArrayWithFlowModel:(id)a0;
+ (BOOL)isContainEditEffectWithPublishModel:(id)a0 atIndex:(long long)a1 publishFlowModel:(id)a2;
+ (void)hideProjectWithUUID:(id)a0 fromPublishViewModel:(id)a1 completion:(id /* block */)a2;
+ (id)splitFlowModel:(id)a0 forWorkspace:(id)a1;
+ (BOOL)hasMegaEditorBeautyFilters:(id)a0;
+ (BOOL)hasGeometryEffect:(id)a0;
+ (BOOL)hasAIEnhance:(id)a0;

@end

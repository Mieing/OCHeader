@class NSString;

@interface AWEAIGCUGCFusionAITemplateTransitionUtils : NSObject <AWEAIGCUGCFusionAITemplateTransitionUtilsProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addSnapshotImageWhenUpdateMainTrackWithEditService:(id)a0;
+ (void)removeSnapshotImageAfterEffectOrTemplateRenderWithEditService:(id)a0;
+ (BOOL)p_updateMainTrackToVideoWithRepository:(id)a0 megaEditor:(id)a1;
+ (BOOL)p_updateMainTrackToOriginalImageWithRepository:(id)a0 editService:(id)a1;
+ (BOOL)p_updateMainTrackToOriginAndResultImageWithRepository:(id)a0 editService:(id)a1 megaEditor:(id)a2;
+ (BOOL)p_updateMainTrackToResultVideoWithRepository:(id)a0 megaEditor:(id)a1;
+ (BOOL)p_updateMainTrackToResultImageWithRepository:(id)a0 editService:(id)a1;
+ (BOOL)p_updateMainTrackToResultImageWithRepository:(id)a0 editService:(id)a1 megaEditor:(id)a2;
+ (id)p_AIGCUGCResultImageFilePathWithRepository:(id)a0;
+ (BOOL)p_isMainTrackSamePathWithRepository:(id)a0 absolutePath:(id)a1;
+ (void)updateDisableReplaceTrack:(BOOL)a0;
+ (BOOL)updateMainTrackForAIGCUGCIfNeededWhenApplyTemplate:(id)a0 repository:(id)a1 editService:(id)a2 megaEditor:(id)a3;
+ (BOOL)updateMainTrackForAIGCUGCIfNeededWhenRemoveTemplate:(id)a0 repository:(id)a1 editService:(id)a2 megaEditor:(id)a3;
+ (void)handleAIGCTaskWithRequestInfo:(id)a0 slotInfos:(id)a1 requestCallback:(id)a2 repository:(id)a3;
+ (void)openPanelAndAutoApplyFirstIfNeededWithPublishModel:(id)a0 specialEffectService:(id)a1;


@end

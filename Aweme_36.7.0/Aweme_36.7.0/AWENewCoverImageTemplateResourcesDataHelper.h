@protocol ACCEditServiceProtocol, ACCVideoCoverEditServiceProtocol;

@interface AWENewCoverImageTemplateResourcesDataHelper : AWEImageTemplateResourcesDataHelper

@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCVideoCoverEditServiceProtocol> videoCoverEditService;
@property (nonatomic) BOOL disableAdjustPostion;

+ (id)logSubTag;

- (BOOL)enableFinetuningAdjustment;
- (id)getNeedDownloadedTemplateResources;
- (BOOL)ifNeedApplyNewTemplateResources;
- (BOOL)applyTemplateResourcesJsonToNLEImageWrapper;
- (BOOL)userVideoCoverRenderOptimize;
- (void).cxx_destruct;

@end

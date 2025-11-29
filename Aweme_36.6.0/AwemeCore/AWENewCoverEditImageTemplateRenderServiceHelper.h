@class NSString, AWENewCoverEditImageTemplateViewModel, AWENewCoverImageTemplateResourcesDataHelper, AWEVideoPublishViewModel;
@protocol AWENewCoverEditImageTemplateRenderServiceHelperDelegate, ACCStickerServiceProtocol, ACCVideoCoverEditServiceProtocol, ACCEditServiceProtocol;

@interface AWENewCoverEditImageTemplateRenderServiceHelper : NSObject <AWEImageTemplateResourcesDataHelperDelegate>

@property (retain, nonatomic) AWENewCoverImageTemplateResourcesDataHelper *resourceDataHelper;
@property (nonatomic) BOOL isRenderTemplateLocked;
@property (weak, nonatomic) AWENewCoverEditImageTemplateViewModel *viewModel;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCVideoCoverEditServiceProtocol> videoCoverEditService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<AWENewCoverEditImageTemplateRenderServiceHelperDelegate> delegate;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (nonatomic) BOOL disableAdjustPostion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getTemplateCropInfoWith:(id)a0;

- (void)bindViewModel;
- (void)removeTemplate;
- (id)currentImageItemModel;
- (void)setShouldLockTemplateApply:(BOOL)a0;
- (void)prepareImageTemplateResourcesIfSuccess:(BOOL)a0 cachedResources:(id)a1;
- (void)prepareImageTemplateResourcesIsCancel;
- (void)clearTemplate;
- (void)renderImageTemplateWithTemplateMediaID:(id)a0 isInitializeScene:(BOOL)a1 currentTemplateInfoModel:(id)a2;
- (void)removeStickers;
- (void)removeFilter;
- (BOOL)userVideoCoverRenderOptimize;
- (id)transferCacheDicToTemplateInfo:(id)a0;
- (id)getCurrentTemplateMediaID;
- (id)currentImageTemplateLayerTrackInfoWithNLEImageWrapper:(id)a0;
- (void)updateStickerLimitViewWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateCoverSafeAreaMaskVIewWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)renderImageTemplateWithTemplateMediaID:(id)a0 isInitializeScene:(BOOL)a1;
- (void).cxx_destruct;

@end

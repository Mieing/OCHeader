@class NSString, NSDictionary, IESECMediaPreviewGalleryManager, IESECMediaPreviewRequest;
@protocol IESECPreviewTrackerService, IESECPreviewStorageService, IESECMediaPreviewContainerProtocol;

@interface IESECMediaPreviewBaseComponent : NSObject <IESECMediaPreviewComponentFeature>

@property (weak, nonatomic) IESECMediaPreviewGalleryManager *manager;
@property (weak, nonatomic) id<IESECMediaPreviewContainerProtocol> container;
@property (weak, nonatomic) id<IESECPreviewStorageService> storage;
@property (weak, nonatomic) id<IESECPreviewTrackerService> tracker;
@property (readonly, nonatomic) IESECMediaPreviewRequest *request;
@property (retain, nonatomic) NSDictionary *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)previewViewDidLoad;
- (void)previewDidZoom:(BOOL)a0 index:(long long)a1;
- (void)previewScrollViewIsScrollingWithCurIndex:(long long)a0 nextIndex:(long long)a1 didZoom:(BOOL)a2;
- (void)previewDidStartTransiting;
- (void)updateGallery:(id)a0;
- (void)previewAddCartSuccess;
- (void)tapShowAllVideos:(BOOL)a0;
- (void)updateRequest:(id)a0;
- (void)previewDidEndTransiting:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithManager:(id)a0;

@end

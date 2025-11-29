@class IESGCPCGSharePictureView, NSString;

@interface IESGCPCGSharePictureComponent : IESGCPCGInstanceBaseComponent <IESGCPCGContainerActions, IESGCPCGSharePictureRouter>

@property (retain, nonatomic) IESGCPCGSharePictureView *shareView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDestroy;
- (void)containerDidAppear;
- (void)userDidTakeScreenshot:(id)a0;
- (void)didSetGameCPDIContext;
- (void)componentDidAttached;
- (void)showSharePictureComponentWhenSaveAlbum:(id)a0;
- (void)preloadShareView;
- (void)dismissShareView;
- (void)showShareViewWithImage:(id)a0 scene:(unsigned long long)a1;
- (BOOL)showShareView;
- (void).cxx_destruct;
- (void)removeNotificationObserver;
- (id)init;
- (void)dealloc;
- (void)addNotificationObserver;

@end

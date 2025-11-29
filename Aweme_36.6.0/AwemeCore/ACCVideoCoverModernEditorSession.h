@class ACCImageAlbumData, NSString, ACCVideoCoverSessionPlayerViewModel;

@interface ACCVideoCoverModernEditorSession : NSObject <ACCVideoCoverModernEditorSessionProtocol>

@property (nonatomic) BOOL didFirstRenderedCallback;
@property (retain, nonatomic) ACCVideoCoverSessionPlayerViewModel *playerViewModel;
@property (nonatomic) BOOL filterImageLayer;
@property (nonatomic) BOOL mainImageLayerEnableMove;
@property (readonly, nonatomic) ACCImageAlbumData *albumData;
@property (readonly, nonatomic) struct CGSize { double width; double height; } containerSize;
@property (copy, nonatomic) id /* block */ onCustomerContentViewRecovered;
@property (copy, nonatomic) id /* block */ onFirstImageEditorRendered;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resetWithContainerView:(id)a0;
- (long long)currentImageEditorIndex;
- (id)currentImageItemModel;
- (long long)totalImagePlayerImageCount;
- (void)reloadCurrentPlayerItem;
- (id)customerContentView;
- (BOOL)applyTemplateFile:(id)a0 diffJson:(id)a1;
- (id)getNeedDownloadedResource;
- (void)updateTemplateInfoAfterDownloadIfSuccess:(BOOL)a0 downloadTemplateCache:(id)a1 callBack:(id /* block */)a2 data:(id)a3;
- (id)getNleWrapper;
- (id)getNleImageAlbumEditor;
- (void)updateOriginImageInfoForTemplate;
- (void)setPlayerCenterOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)updateAlbumData:(id)a0;
- (id)initWithImageAlbumData:(id)a0 containerSize:(struct CGSize { double x0; double x1; })a1;
- (void)p_logInfoWithLogMsg:(id)a0;
- (id)geometryModelWithLayer:(id)a0 fromNLEImageWrapper:(id)a1 mediaSize:(struct CGSize { double x0; double x1; })a2;
- (void)p_logErrorWithLogMsg:(id)a0;
- (void)p_setupPlayerDataSource;
- (void)p_logInfoWithLogMsg:(id)a0 isError:(BOOL)a1;
- (void)saveImageAlbumTemplateStickersWithImageEditor:(id)a0 ImageItem:(id)a1;
- (void).cxx_destruct;

@end

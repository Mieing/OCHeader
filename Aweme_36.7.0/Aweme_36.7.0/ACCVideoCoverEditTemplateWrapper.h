@class NSString;
@protocol ACCVideoCoverModernEditorSessionProtocol;

@interface ACCVideoCoverEditTemplateWrapper : NSObject <ACCVideoCoverEditBuildListener, ACCVideoCoverEditTemplateProtocol>

@property (weak, nonatomic) id<ACCVideoCoverModernEditorSessionProtocol> player;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onEditSessionInit:(id)a0;
- (void)setEditSessionProvider:(id)a0;
- (BOOL)applyTemplateFile:(id)a0 diffJson:(id)a1;
- (id)getNeedDownloadedResource;
- (void)updateTemplateInfoAfterDownloadIfSuccess:(BOOL)a0 downloadTemplateCache:(id)a1 callBack:(id /* block */)a2 data:(id)a3;
- (id)getNleWrapper;
- (id)getNleImageAlbumEditor;
- (void)updateOriginImageInfoForTemplate;
- (void)setPlayerCenterOffset:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;

@end

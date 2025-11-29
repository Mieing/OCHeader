@class NSString;
@protocol ACCImageAlbumEditorSessionProtocol;

@interface ACCImageAlbumEditHDRWraper : NSObject <ACCEditBuildListener, ACCImageEditHDRProtocol>

@property (weak, nonatomic) id<ACCImageAlbumEditorSessionProtocol> player;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onEditSessionInit:(id)a0;
- (void)setEditSessionProvider:(id)a0;
- (void)setupLensHDRModelWithFilePath:(id)a0;
- (void)setHDREnable:(BOOL)a0;
- (void).cxx_destruct;

@end

@class VEEditorSession, NLEInterface_OC;
@protocol ACCImageAlbumEditorSessionProtocol;

@interface ACCEditSessionWrapper : NSObject

@property (retain, nonatomic) VEEditorSession *videoEditSession;
@property (retain, nonatomic) id<ACCImageAlbumEditorSessionProtocol> imageEditSession;
@property (readonly, nonatomic) NLEInterface_OC *nle;

- (id)initWithEditorSession:(id)a0 nle:(id)a1;
- (id)initWithEditorSession:(id)a0;
- (void).cxx_destruct;

@end

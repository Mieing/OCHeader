@class VEEditorSession, NLEInterface_OC;
@protocol ACCVideoCoverModernEditorSessionProtocol;

@interface ACCVideoCoverEditSessionWrapper : NSObject

@property (retain, nonatomic) VEEditorSession *videoEditSession;
@property (retain, nonatomic) id<ACCVideoCoverModernEditorSessionProtocol> imageEditSession;
@property (readonly, nonatomic) NLEInterface_OC *nle;

- (id)initWithEditorSession:(id)a0 nle:(id)a1;
- (id)initWithEditorSession:(id)a0;
- (void).cxx_destruct;

@end

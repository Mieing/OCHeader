@class NSString, ACCCreationToolMediaTypeObject, AUCDTOPageCamera, AUCDTOPageEditor, AWEDTOUltraCreationToolModel, UIViewController;

@interface ACCRepoCreationToolModel : NSObject <ACCRepoModelDraftProtocol, ACCRepoCreationToolData, ACCRepoRegister>

@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) AWEDTOUltraCreationToolModel *DTOModel;
@property (weak, nonatomic) UIViewController *sourceViewController;
@property (weak, nonatomic) UIViewController *rootSourceViewController;
@property (nonatomic) long long phase;
@property (nonatomic) long long enterEditerVideoSource;
@property (retain, nonatomic) ACCCreationToolMediaTypeObject *mediaType;
@property (retain, nonatomic) AUCDTOPageCamera *cameraConfig;
@property (retain, nonatomic) AUCDTOPageEditor *editorConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)draft_DTOModelClass;
+ (id)repo_dataProtocol;

- (void)draft_updateWithDTOModel:(id)a0;
- (id)draft_DTOModel;
- (id)musicConfig;
- (void)p_updateMediaTypeToDTO;
- (void).cxx_destruct;
- (id)init;
- (void)resetToken;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

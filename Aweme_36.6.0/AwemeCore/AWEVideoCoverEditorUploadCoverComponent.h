@class UIImage, NSString, AWECoverEditorNLEEditorInputData;

@interface AWEVideoCoverEditorUploadCoverComponent : ACCFeatureComponent <AWEVideoCoverEditorUploadCoverServiceProtocol>

@property (weak, nonatomic) AWECoverEditorNLEEditorInputData *inputData;
@property (retain, nonatomic) UIImage *lastUploadCoverImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)componentDidAppear;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBindingArray;
- (void)bindServices:(id)a0;
- (void)uploadUserSelectCoverImage:(id)a0;
- (void).cxx_destruct;

@end

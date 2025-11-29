@class NSString, ACCEditFrameUploadServiceImpl;

@interface ACCSequenceFrameUploadComponent : ACCFeatureComponent <ACCEditSessionLifeCircleEvent>

@property (retain, nonatomic) ACCEditFrameUploadServiceImpl *uploadService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)serviceBinding;
- (void).cxx_destruct;

@end

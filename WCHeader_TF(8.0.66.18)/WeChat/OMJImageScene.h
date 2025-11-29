@class OMJImageCropDesc, NSString, CLLocation, OMJImageSession;

@interface OMJImageScene : NSObject

@property (readonly, nonatomic) struct SharedPtr<XISImageScene> { struct XISImageScene *x0; } backingImageScene;
@property (readonly, nonatomic) struct SharedPtr<XISImageEditingModel> { struct XISImageEditingModel *x0; } backingEditingModel;
@property (readonly, weak, nonatomic) OMJImageSession *imageSession;
@property (readonly, nonatomic) NSString *sceneID;
@property (retain, nonatomic) NSString *filterID;
@property (nonatomic) BOOL isFilterEnabled;
@property (retain, nonatomic) NSString *filterOptions;
@property (nonatomic) float filterIntensity;
@property (readonly, nonatomic) BOOL isFilterAdjusted;
@property (readonly, nonatomic) OMJImageCropDesc *imageCropDesc;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } pointSize;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } creationTime;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } modificationTime;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) BOOL isLivePhoto;
@property (nonatomic) unsigned long long livePhotoUsage;
@property (readonly, nonatomic) NSString *phLocalIdentifier;

- (id)mj_aspectRatio;
- (id)initWithSceneID:(id)a0 imageSession:(id)a1;
- (id)addTextLayerWithMaterialID:(id)a0;
- (id)addEmoticonLayerWithFilePath:(id)a0 decoderType:(unsigned long long)a1 timingFillMode:(unsigned long long)a2;
- (id)addWhenWhereLayerWithMaterialID:(id)a0;
- (id)imageLayerWithID:(id)a0;
- (id)imageLayers;
- (BOOL)removeLayerWithID:(id)a0;
- (BOOL)isModified;
- (BOOL)_updateImageCropDesc:(id)a0;
- (struct CGSize { double x0; double x1; })_imagePixelSize;
- (BOOL)updateCropRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)updateAspectRatio:(id)a0;
- (void)saveSnapshotToDirectoryPath:(id)a0 imageType:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end

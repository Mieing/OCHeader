@class NSString, OMJImageCropDesc, OMJImageScene;

@interface MJImageComposingExportAssetDesc : NSObject

@property (readonly, nonatomic) OMJImageScene *scene;
@property (readonly, nonatomic) NSString *imageFilePath;
@property (readonly, nonatomic) NSString *videoFilePath;
@property (readonly, nonatomic) OMJImageCropDesc *cropDesc;
@property (readonly, nonatomic) BOOL isLivePhoto;

- (id)initWithImageFilePath:(id)a0 scene:(id)a1;
- (id)initWithImageFilePath:(id)a0 videoFilePath:(id)a1 scene:(id)a2;
- (void)setupData;
- (id)description;
- (void).cxx_destruct;

@end

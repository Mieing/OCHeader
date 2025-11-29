@class EditImageLogicController, UIImage, EditImageAttr, NSURL;

@interface MMAssetForFakeFastSend : MMAsset

@property (nonatomic) BOOL isNeedOriginImage;
@property (retain, nonatomic) UIImage *oImage;
@property (retain, nonatomic) EditImageAttr *editImageAttr;
@property (weak, nonatomic) EditImageLogicController *editImageLogicController;
@property (retain, nonatomic) NSURL *screenShotUrl;

+ (BOOL)isAsset:(id)a0 CreateWithInSecond:(double)a1;

- (id)initWithUrl:(id)a0 withImg:(id)a1 IsNeedOrigin:(BOOL)a2;
- (struct CGSize { double x0; double x1; })retriveOriginImageSize;
- (void)getBigImageWithCompressConfig:(id)a0 ProcessBlock:(id /* block */)a1 ResultBlock:(id /* block */)a2 ErrorBlock:(id /* block */)a3;
- (void)getDisplayImageWithCompressConfig:(id)a0 ResultBlock:(id /* block */)a1 ErrorBlock:(id /* block */)a2;
- (void)getHighResolutionImageWithCompressConfig:(id)a0 ProcessBlock:(id /* block */)a1 ResultBlock:(id /* block */)a2 ErrorBlock:(id /* block */)a3 FaceCountBlock:(id /* block */)a4;
- (id)getThumbImage;
- (id)getThumbnail;
- (id)getThumbImageWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)asyncGetThumbnail:(id /* block */)a0;
- (void)asyncGetAspectRatioThumbnailWithTargetSize:(struct CGSize { double x0; double x1; })a0 andResult:(id /* block */)a1;
- (id)assetUrl;
- (id)assetId;
- (id)alAssetReferenceUrl;
- (BOOL)isPicture;
- (id)getOriginImageDataSize;
- (void)asyncGetOriginImageDataSizeWithBlock:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)getCreatedDate;
- (struct CGSize { double x0; double x1; })getImageRatioSize;
- (void)setEditedImage:(id)a0 withDrawLayer:(id)a1 withEdited:(BOOL)a2;
- (id)getDrawLayerArray;
- (BOOL)getIsEdited;
- (id)getEditImageAttr;
- (id)m_editImageAttr;
- (BOOL)tryUpdateAsset;
- (void).cxx_destruct;

@end

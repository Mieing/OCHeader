@class NSString, UIImage;

@interface MMAssetForFLTSelectPhotoInfo : MMAsset

@property (retain, nonatomic) NSString *assetId;
@property (retain, nonatomic) NSString *assetPath;
@property (retain, nonatomic) UIImage *image;

- (id)getThumbImage;
- (id)getThumbnail;
- (id)getThumbImageWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)asyncGetThumbnail:(id /* block */)a0;
- (void)getBigImageWithCompressConfig:(id)a0 ProcessBlock:(id /* block */)a1 ResultBlock:(id /* block */)a2 ErrorBlock:(id /* block */)a3;
- (void)getDisplayImageWithCompressConfig:(id)a0 ResultBlock:(id /* block */)a1 ErrorBlock:(id /* block */)a2;
- (void)getHighResolutionImageWithCompressConfig:(id)a0 ProcessBlock:(id /* block */)a1 ResultBlock:(id /* block */)a2 ErrorBlock:(id /* block */)a3 FaceCountBlock:(id /* block */)a4;
- (void).cxx_destruct;

@end

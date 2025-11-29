@class NSString;

@interface MMAssetFromSandboxFramework : MMAsset

@property (retain, nonatomic) NSString *localAssetURL;

- (id)initWithLocalURL:(id)a0;
- (id)getThumbImage;
- (id)getThumbImageWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)getThumbnail;
- (id)assetUrl;
- (id)assetId;
- (void)asyncGetVideoAssetWithBlock:(id /* block */)a0;
- (id)videoDuration;
- (struct CGSize { double x0; double x1; })getImageRatioSize;
- (void).cxx_destruct;

@end

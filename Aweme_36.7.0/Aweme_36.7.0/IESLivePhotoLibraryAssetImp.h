@class NSString, AVAsset, NSDictionary, UIImage, PHAsset, NSURL, NSData;

@interface IESLivePhotoLibraryAssetImp : NSObject <IESLivePhotoPickerAsset>

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) AVAsset *avAsset;
@property (retain, nonatomic) PHAsset *phAsset;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSData *imageData;
@property (copy, nonatomic) NSDictionary *info;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)liveAsset_mediaType;
- (id)liveAsset_image;
- (id)liveAsset_imageData;
- (id)liveAsset_resourceUrl;
- (id)liveAsset_avAsset;
- (struct CGSize { double x0; double x1; })liveAsset_resourceSize;
- (long long)liveAsset_dataLength;
- (id)liveAsset_fileFormat;
- (id)liveAsset_phAsset;
- (void)fetchResource:(id /* block */)a0;
- (void).cxx_destruct;

@end

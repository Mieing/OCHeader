@class NSArray, NSString, NSData, PHAsset;
@protocol WBMediaTransferProtocol;

@interface WBImageObject : NSObject

@property (retain, nonatomic) PHAsset *livePhotoAsset;
@property (retain, nonatomic) NSArray *finalAssetArray;
@property (retain, nonatomic) NSArray *imageDataArray;
@property (retain, nonatomic) NSArray *imagePathArray;
@property (retain, nonatomic) NSData *livePhotoImageData;
@property (retain, nonatomic) NSData *livePhotoVideoData;
@property (retain, nonatomic) NSString *livePhotoImagePath;
@property (retain, nonatomic) NSString *livePhotoVideoPath;
@property (retain, nonatomic) NSString *livePhotoVideoFormat;
@property (nonatomic) BOOL isLivePhoto;
@property (retain, nonatomic) NSData *panoramaImageData;
@property (retain, nonatomic) NSData *imageData;
@property (nonatomic) BOOL isShareToStory;
@property (weak, nonatomic) id<WBMediaTransferProtocol> delegate;

+ (id)dictionaryWithImageObject:(id)a0;
+ (id)imageObjectWithDictionary:(id)a0;
+ (id)object;

- (void)callAddLivePhoto:(id)a0 completion:(id /* block */)a1;
- (void)setLivePhotoAsset:(id)a0 completion:(id /* block */)a1;
- (void)setLivePhotoImageUrl:(id)a0 livePhotoVideoUrl:(id)a1;
- (void).cxx_destruct;
- (id)validate;
- (void)addImages:(id)a0;
- (id)image;

@end

@class WCLivePhotoMovModel;

@interface WCLivePhotoMaker : NSObject

@property (retain, nonatomic) WCLivePhotoMovModel *livePhotoMovModel;
@property (nonatomic) BOOL preferedHEVC;
@property (nonatomic) long long stillImageTimeMs;
@property long long imageMetadataCostTimeMs;
@property long long videoMetadataCostTimeMs;
@property long long readyForMoreTimeMs;
@property long long readyForMoreFrameCounts;

+ (BOOL)saveToJPEGWithImage:(id)a0 imagePath:(id)a1;
+ (id)generateImagePathWithRandom;

- (void)makeLivePhotoWithImagePath:(id)a0 videoPath:(id)a1 completionHandler:(id /* block */)a2;
- (void)makeLivePhotoByImagePath:(id)a0 videoPath:(id)a1 preferedHEVC:(BOOL)a2 stillImageTimeMs:(long long)a3 completionHandler:(id /* block */)a4;
- (void).cxx_destruct;

@end

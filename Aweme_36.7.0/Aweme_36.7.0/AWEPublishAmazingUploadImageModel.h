@class NSURL, NSString, NSError;

@interface AWEPublishAmazingUploadImageModel : AWEBaseBizConfigModel

@property (copy, nonatomic) NSURL *fileURL;
@property (copy, nonatomic) NSString *uploadUri;
@property (nonatomic) long long originIndex;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) double imageFileSize;
@property (nonatomic) BOOL isLivePhotoFirstFrame;
@property (nonatomic) long long progress;
@property (retain, nonatomic) id userInfo;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSURL *superResURL;
@property (copy, nonatomic) NSString *originAssetCache;
@property (nonatomic) BOOL useOriginAssetCache;

- (void).cxx_destruct;
- (id)description;

@end

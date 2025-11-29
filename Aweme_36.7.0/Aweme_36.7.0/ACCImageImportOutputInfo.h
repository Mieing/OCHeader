@class NSString, NSURL, NSDictionary;

@interface ACCImageImportOutputInfo : NSObject

@property (nonatomic) BOOL isLivePhoto;
@property (nonatomic) double livePhotoDuration;
@property (retain, nonatomic) NSString *imageFilePath;
@property (retain, nonatomic) NSString *compressedImageFilePath;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) double imageScale;
@property (copy, nonatomic) NSURL *videoFileURL;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (retain, nonatomic) NSString *projectUUIDString;
@property (retain, nonatomic) NSString *assetLocalIdentifier;

- (BOOL)empty;
- (void).cxx_destruct;
- (id)image;
- (id)imageFileURL;

@end

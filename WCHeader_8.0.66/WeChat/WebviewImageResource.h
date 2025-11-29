@class MMImage, MMImageExifLogInfo;

@interface WebviewImageResource : NSObject

@property (retain, nonatomic) MMImage *image;
@property (retain, nonatomic) MMImageExifLogInfo *exifLogInfo;
@property (nonatomic) BOOL isGif;

- (void).cxx_destruct;

@end

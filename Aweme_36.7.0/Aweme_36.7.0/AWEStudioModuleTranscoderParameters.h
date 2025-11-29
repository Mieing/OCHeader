@class NSString;

@interface AWEStudioModuleTranscoderParameters : NSObject

@property (nonatomic) struct CGSize { double width; double height; } targetSize;
@property (nonatomic) long long bitrate;
@property (retain, nonatomic) NSString *targetPath;

- (void).cxx_destruct;

@end

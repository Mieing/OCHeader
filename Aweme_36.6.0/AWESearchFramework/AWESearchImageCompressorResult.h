@class NSData, NSString;

@interface AWESearchImageCompressorResult : NSObject

@property (retain, nonatomic) NSData *resultData;
@property (nonatomic) float inputImageSize;
@property (nonatomic) float outputImageSize;
@property (nonatomic) float compression;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) double costTime;
@property (nonatomic) BOOL success;

- (void).cxx_destruct;

@end

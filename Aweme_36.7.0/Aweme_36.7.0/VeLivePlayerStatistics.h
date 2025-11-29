@class NSURL, NSString;

@interface VeLivePlayerStatistics : NSObject

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) BOOL isHardWareDecode;
@property (readonly, nonatomic) int delayMs;
@property (readonly, nonatomic) int stallTimeMs;
@property (readonly, copy, nonatomic) NSString *videoCodec;
@property (readonly, nonatomic) int width;
@property (readonly, nonatomic) int height;
@property (readonly, nonatomic) float fps;
@property (readonly, nonatomic) long long bitrate;
@property (readonly, nonatomic) long long videoBufferMs;
@property (readonly, nonatomic) long long audioBufferMs;
@property (readonly, nonatomic) long long format;
@property (readonly, nonatomic) long long protocol;

- (void)parseData:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end

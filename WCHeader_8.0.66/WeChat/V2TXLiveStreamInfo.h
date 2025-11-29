@class NSString;

@interface V2TXLiveStreamInfo : NSObject

@property (nonatomic) int width;
@property (nonatomic) int height;
@property (nonatomic) int bitrate;
@property (nonatomic) float framerate;
@property (copy, nonatomic) NSString *url;

- (id)description;
- (void).cxx_destruct;

@end

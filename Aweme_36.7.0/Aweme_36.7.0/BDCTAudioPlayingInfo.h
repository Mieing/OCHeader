@class NSURL;

@interface BDCTAudioPlayingInfo : NSObject

@property (nonatomic) double currentTime;
@property (nonatomic) double duration;
@property (nonatomic) double progress;
@property (copy, nonatomic) NSURL *fileUrl;

- (void).cxx_destruct;

@end

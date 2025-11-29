@class NSString;

@interface BDPVideoClipInfo : NSObject

@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) float speed;
@property (copy, nonatomic) NSString *transition;
@property (copy, nonatomic) NSString *transitionResourcePath;
@property (copy, nonatomic) NSString *audioMixFilePath;
@property (nonatomic) double audioMixStartTime;
@property (nonatomic) double audioMixEndTime;

- (void).cxx_destruct;

@end

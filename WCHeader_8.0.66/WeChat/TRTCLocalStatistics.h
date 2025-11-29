@interface TRTCLocalStatistics : NSObject

@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (nonatomic) unsigned int frameRate;
@property (nonatomic) unsigned int videoBitrate;
@property (nonatomic) unsigned int audioSampleRate;
@property (nonatomic) unsigned int audioBitrate;
@property (nonatomic) long long streamType;
@property (nonatomic) unsigned int audioCaptureState;

- (id)description;

@end

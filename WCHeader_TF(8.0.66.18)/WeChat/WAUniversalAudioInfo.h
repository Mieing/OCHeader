@class AVAudioFormat, NSString, AVAudioFile, NSURL, AVAudioPCMBuffer;

@interface WAUniversalAudioInfo : NSObject

@property (copy, nonatomic) NSURL *src;
@property (copy, nonatomic) NSString *audioID;
@property (copy, nonatomic) NSURL *url;
@property (nonatomic) double startTime;
@property (nonatomic) BOOL autoPlay;
@property (nonatomic) BOOL loop;
@property (nonatomic) double audioVolume;
@property (nonatomic) double duration;
@property (retain, nonatomic) AVAudioPCMBuffer *skippedPCMBuffer;
@property (retain, nonatomic) AVAudioPCMBuffer *PCMBuffer;
@property (retain, nonatomic) AVAudioFormat *audioFormat;
@property (nonatomic) unsigned int frameLength;
@property (retain, nonatomic) AVAudioFile *audioFile;
@property (nonatomic) double offset;
@property (copy, nonatomic) NSString *cacheKey;
@property (copy, nonatomic) NSString *dataPathToWrite;

- (id)init;
- (void).cxx_destruct;

@end

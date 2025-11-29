@class NSString;

@interface AudioFileTransferInfo : NSObject

@property (copy, nonatomic) NSString *sourcePath;
@property (copy, nonatomic) NSString *outputPath;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) double maxAudioDuration;

- (void).cxx_destruct;

@end

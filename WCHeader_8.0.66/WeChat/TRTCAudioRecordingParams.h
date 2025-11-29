@class NSString;

@interface TRTCAudioRecordingParams : NSObject

@property (retain, nonatomic) NSString *filePath;
@property (nonatomic) unsigned long long recordingContent;
@property (nonatomic) int maxDurationPerFile;

- (id)init;
- (void).cxx_destruct;

@end

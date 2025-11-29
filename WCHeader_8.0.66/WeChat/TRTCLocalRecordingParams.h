@class NSString;

@interface TRTCLocalRecordingParams : NSObject

@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) unsigned long long recordType;
@property (nonatomic) int interval;
@property (nonatomic) int maxDurationPerFile;

- (id)init;
- (void).cxx_destruct;

@end

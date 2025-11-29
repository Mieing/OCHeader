@class NSString;

@interface V2TXLiveLocalRecordingParams : NSObject

@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) unsigned long long recordMode;
@property (nonatomic) int interval;

- (id)init;
- (void).cxx_destruct;

@end

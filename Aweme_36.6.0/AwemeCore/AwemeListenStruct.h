@class NSString, AwemeListenDiversionStructV2;

@interface AwemeListenStruct : GPBMessage

@property (nonatomic) int videoSleepStatus;
@property (nonatomic) BOOL hasVideoSleepStatus;
@property (nonatomic) int musicCoverListen;
@property (nonatomic) BOOL hasMusicCoverListen;
@property (copy, nonatomic) NSString *traceInfo;
@property (nonatomic) BOOL hasTraceInfo;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL hasExtra;
@property (retain, nonatomic) AwemeListenDiversionStructV2 *listenDiversion;
@property (nonatomic) BOOL hasListenDiversion;

+ (id)descriptor;

- (id)listenDiversion;
- (id)traceInfo;
- (int)videoSleepStatus;

@end

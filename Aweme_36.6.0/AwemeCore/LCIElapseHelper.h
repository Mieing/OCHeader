@class NSLock, NSMutableDictionary, NSMutableArray;

@interface LCIElapseHelper : NSObject

@property (retain, nonatomic) NSMutableDictionary *videoFrameToRTCStartTimeDict;
@property (retain, nonatomic) NSMutableArray *videoFrameToRTCElapsedArr;
@property (retain, nonatomic) NSLock *videoFrameToRTCElapseLock;
@property (retain, nonatomic) NSMutableDictionary *audioFrameToRTCStartTimeDict;
@property (retain, nonatomic) NSMutableArray *audioFrameToRTCElapsedArr;
@property (retain, nonatomic) NSLock *audioFrameToRTCElapseLock;
@property (nonatomic) double RTCLinkElapsedTime;
@property (nonatomic) BOOL enableStatistics;
@property (nonatomic) double videoFrameToRTCElapsed;
@property (nonatomic) double audioFrameToRTCElapsed;
@property (nonatomic) double RTCLinkElapsed;
@property (nonatomic) double startInteractStreamingTime;
@property (nonatomic) double startInteractTime;
@property (nonatomic) double joinChannelTime;
@property (nonatomic) double joinChannelSuccessTime;
@property (nonatomic) double startPushDataTime;
@property (nonatomic) double pushLiveStreamTime;
@property (nonatomic) double publishRtmpStreamTime;
@property (nonatomic) double firstRemoteVideoDecodedTime;
@property (nonatomic) double firstRemoteVideoRenderTime;
@property (nonatomic) double stopInteractStreamingTime;

+ (id)handleSEIDataForElapsedTimeWithDic:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (int)elapsedTimeStatisticsWithStatus:(long long)a0 timeStampValue:(double)a1;
- (BOOL)checkTimeStamp:(double)a0;
- (void)cleanRtcElapseData;
- (void)rtcLinkElapsedTimeStatisticsWithSEIData:(id)a0;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setupData;

@end

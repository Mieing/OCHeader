@class NSString;

@interface AWEPlayVideoAudioMetricsContext : NSObject

@property (nonatomic) void *SAMICoreHandle;
@property (nonatomic) long long channels;
@property (nonatomic) long long samplerate;
@property (nonatomic) long long duration;
@property (nonatomic) long long createHandleErr;
@property (nonatomic) long long setPropertyErr;
@property (nonatomic) long long lastProcessTimeStamp;
@property (nonatomic) double systemVolumeEnter;
@property (nonatomic) double systemVolumeLeave;
@property (nonatomic) BOOL hasCompletePlayback;
@property (nonatomic) BOOL notifyEndRet;
@property (nonatomic) long long callingEventIndex;
@property (copy, nonatomic) NSString *creationId;
@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *musicId;
@property (nonatomic) BOOL existMusicPath;
@property (copy, nonatomic) NSString *mvId;
@property (copy, nonatomic) NSString *stickerId;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) long long awemeType;
@property (nonatomic) double srcLoudness;
@property (nonatomic) double srcPeak;
@property (nonatomic) double srcLoudnessTarget;
@property (nonatomic) double srcLoudnessRange;
@property (nonatomic) double srcLoudnessRangeStart;
@property (nonatomic) double srcLoudnessRangeEnd;
@property (nonatomic) double srcLoudnessMaxMom;
@property (nonatomic) double srcLoudnessMaxShort;
@property (nonatomic) long long srcLoudnessVersion;

- (void).cxx_destruct;
- (id)init;

@end

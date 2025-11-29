@interface TPLiveReportParamRecord : NSObject

@property (nonatomic) long long prepareEndSinceBootTimeMs;
@property (nonatomic) long long playerFirstStartSinceBootTimeMs;
@property (nonatomic) long long playerStartSinceBootTimeMs;
@property (nonatomic) long long retentionDurationMs;
@property (nonatomic) long long bufferingStartSinceBootTimeMs;
@property (nonatomic) long long periodBufferingTotalDurationMs;
@property (nonatomic) long long periodBufferingCount;
@property (nonatomic) long long periodPlayedDurationMs;

@end

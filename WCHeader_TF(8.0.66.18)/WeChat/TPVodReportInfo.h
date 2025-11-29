@interface TPVodReportInfo : TPDefaultReportInfo

@property (nonatomic) long long optimizedPlay;
@property (nonatomic) BOOL hasSubtitles;
@property (nonatomic) long long bizId;
@property (nonatomic) long long clipCount;
@property (nonatomic) long long videoStatus;
@property (nonatomic) long long currentPlayState;

- (long long)playType;

@end

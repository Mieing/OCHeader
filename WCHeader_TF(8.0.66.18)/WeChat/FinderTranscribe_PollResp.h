@class FinderTranscribe_VersionInfo, NSMutableArray;

@interface FinderTranscribe_PollResp : WXPBGeneratedMessage

@property (nonatomic) int progress;
@property (retain, nonatomic) NSMutableArray *transResult;
@property (nonatomic) long long voiceLenMs;
@property (retain, nonatomic) FinderTranscribe_VersionInfo *versionInfo;

+ (void)initialize;

@end

@class BaseRequest, MusicInfo, NSString;

@interface ReportMusicRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) MusicInfo *currentMusicInfo;
@property (retain, nonatomic) NSString *reportList;

+ (void)initialize;

@end

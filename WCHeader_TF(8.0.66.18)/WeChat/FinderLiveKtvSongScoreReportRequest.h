@class BaseRequest, NSString, FinderBaseRequest, FinderLiveKtvSongScoreReportRequest_ExtReportInfo, FinderLiveKtvSongScoreReportRequest_ScoreInfo;

@interface FinderLiveKtvSongScoreReportRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *anchorFinderUsername;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *uniqueId;
@property (retain, nonatomic) FinderLiveKtvSongScoreReportRequest_ScoreInfo *finalScoreInfo;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) FinderLiveKtvSongScoreReportRequest_ExtReportInfo *extReportInfo;

+ (void)initialize;

@end

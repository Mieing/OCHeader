@class MMFinderLiveKTVSongItem, NSData, FinderLiveKtvSongScoreReportRequest_ExtReportInfo, FinderLiveKtvSongScoreReportRequest_ScoreInfo;

@interface WCFinderLiveKtvSongScoreReportCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) MMFinderLiveKTVSongItem *songItem;
@property (retain, nonatomic) FinderLiveKtvSongScoreReportRequest_ScoreInfo *scoreInfo;
@property (retain, nonatomic) FinderLiveKtvSongScoreReportRequest_ExtReportInfo *singExtReportInfo;
@property (nonatomic) BOOL isFinish;
@property (nonatomic) long long liveScene;
@property (retain, nonatomic) NSData *liveCookies;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failureBlock;

- (id)initWithLiveTaskId:(id)a0 songItem:(id)a1 scoreInfo:(id)a2 extReportInfo:(id)a3 finish:(BOOL)a4 liveScene:(long long)a5 liveCookies:(id)a6 successBlock:(id /* block */)a7 failureBlock:(id /* block */)a8;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

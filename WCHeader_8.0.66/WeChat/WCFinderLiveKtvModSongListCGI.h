@class NSString, NSDictionary, NSData, FinderLiveKtvSongReportInfo;

@interface WCFinderLiveKtvModSongListCGI : WCFinderLiveBaseCgi

@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int status;
@property (nonatomic) unsigned int modType;
@property (nonatomic) BOOL onlyMysong;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) NSString *songId;
@property (retain, nonatomic) NSString *uniqueId;
@property (retain, nonatomic) NSString *targetUserId;
@property (retain, nonatomic) FinderLiveKtvSongReportInfo *songReportInfo;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failureBlock;

+ (id)generateActionSync:(unsigned int)a0 liveTaskId:(id)a1 liveCookies:(id)a2 scene:(unsigned int)a3 targetUser:(id)a4 successBlock:(id /* block */)a5 failureBlock:(id /* block */)a6;

- (id)initWithLiveTaskId:(id)a0 liveCookies:(id)a1 scene:(unsigned int)a2 modType:(unsigned int)a3 songId:(id)a4 uniqueId:(id)a5 extraInfo:(id)a6 songReportInfo:(id)a7 successBlock:(id /* block */)a8 failureBlock:(id /* block */)a9;
- (id)initWithLiveTaskId:(id)a0 liveCookies:(id)a1 scene:(unsigned int)a2 modType:(unsigned int)a3 targetUser:(id)a4 successBlock:(id /* block */)a5 failureBlock:(id /* block */)a6;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void)updatePendingSongsAndVersion:(id)a0;
- (void)updateExtraInfos:(id)a0;
- (id)transferToSongItemsFromSongInfos:(id)a0;
- (void).cxx_destruct;

@end

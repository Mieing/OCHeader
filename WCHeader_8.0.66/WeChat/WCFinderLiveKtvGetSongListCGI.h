@class WCFinderDataItem, NSData;

@interface WCFinderLiveKtvGetSongListCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) WCFinderDataItem *finderDataItem;
@property (nonatomic) unsigned int scene;
@property (nonatomic) int commentScene;
@property (nonatomic) unsigned int status;
@property (nonatomic) BOOL onlyMysong;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned int requestCnt;
@property (nonatomic) unsigned long long songListVersion;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failureBlock;

- (id)initWithLiveTaskId:(id)a0 liveCookies:(id)a1 scene:(unsigned int)a2 status:(unsigned int)a3 onlyMysong:(BOOL)a4 songListVersion:(unsigned long long)a5 successBlock:(id /* block */)a6 failureBlock:(id /* block */)a7;
- (id)initWithLiveTaskId:(id)a0 liveCookies:(id)a1 scene:(unsigned int)a2 status:(unsigned int)a3 onlyMysong:(BOOL)a4 requestCnt:(unsigned int)a5 songListVersion:(unsigned long long)a6 successBlock:(id /* block */)a7 failureBlock:(id /* block */)a8;
- (id)initWithDataItem:(id)a0 scene:(unsigned int)a1 commentScene:(int)a2 status:(unsigned int)a3 onlyMysong:(BOOL)a4 requestCnt:(unsigned int)a5 songListVersion:(unsigned long long)a6 successBlock:(id /* block */)a7 failureBlock:(id /* block */)a8;
- (void)createRequest;
- (void)createRequestWithoutTask;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void)updatePendingSongsAndVersion:(id)a0;
- (id)transferToSongItemsFromSongInfos:(id)a0;
- (void).cxx_destruct;

@end

@class NSData, NSString;

@interface WCFinderLiveKtvGetSongSungListCGI : WCFinderLiveBaseCgi

@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int status;
@property (nonatomic) BOOL onlyMysong;
@property (nonatomic) BOOL isReverseOrder;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned long long songListVersion;
@property (retain, nonatomic) NSString *targetSongUniqueId;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failureBlock;

- (id)initWithLiveTaskId:(id)a0 liveCookies:(id)a1 scene:(unsigned int)a2 onlyMysong:(BOOL)a3 isReverseOrder:(BOOL)a4 lastBuffer:(id)a5 songListVersion:(unsigned long long)a6 targetSongUniqueId:(id)a7 successBlock:(id /* block */)a8 failureBlock:(id /* block */)a9;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

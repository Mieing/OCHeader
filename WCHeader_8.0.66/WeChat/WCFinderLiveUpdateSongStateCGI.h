@class NSString;

@interface WCFinderLiveUpdateSongStateCGI : WCFinderLiveBaseCgi

@property (nonatomic) unsigned long long seq;
@property (nonatomic) BOOL singing;
@property (retain, nonatomic) NSString *songName;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithFinderTaskId:(id)a0 songName:(id)a1 isSinging:(BOOL)a2 seq:(unsigned long long)a3 successBlock:(id /* block */)a4 failBlock:(id /* block */)a5;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

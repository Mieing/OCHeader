@class NSMutableArray;

@interface WCFinderLiveUpdateSongListCGI : WCFinderLiveBaseCgi

@property (nonatomic) unsigned long long seq;
@property (retain, nonatomic) NSMutableArray *songNameList;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithFinderTaskId:(id)a0 songList:(id)a1 seq:(unsigned long long)a2 successBlock:(id /* block */)a3 failBlock:(id /* block */)a4;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (id)transferToSongNameList:(id)a0;
- (id)transferToSongItemList:(id)a0;
- (void).cxx_destruct;

@end

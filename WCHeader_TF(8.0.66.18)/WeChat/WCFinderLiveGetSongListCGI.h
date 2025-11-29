@class MMFinderLiveSongItem;

@interface WCFinderLiveGetSongListCGI : WCFinderLiveBaseCgi

@property (nonatomic) BOOL isAudience;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (retain, nonatomic) MMFinderLiveSongItem *singingSongItem;

- (id)initWithFinderTaskId:(id)a0 audience:(BOOL)a1 successBlock:(id /* block */)a2 failBlock:(id /* block */)a3;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (id)transferToSongItemList:(id)a0;
- (void).cxx_destruct;

@end

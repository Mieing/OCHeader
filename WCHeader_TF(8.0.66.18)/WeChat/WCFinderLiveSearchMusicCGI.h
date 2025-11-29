@class NSString, NSData, MMFinderLiveTaskId;

@interface WCFinderLiveSearchMusicCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) MMFinderLiveTaskId *liveTaskId;
@property (copy, nonatomic) NSString *searchText;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) NSData *lastBuffer;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithFinderTaskId:(id)a0 searchText:(id)a1 lastBuffer:(id)a2 liveCookies:(id)a3 successBlock:(id /* block */)a4 failBlock:(id /* block */)a5;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (id)convertMusicItemList:(id)a0;
- (void).cxx_destruct;

@end

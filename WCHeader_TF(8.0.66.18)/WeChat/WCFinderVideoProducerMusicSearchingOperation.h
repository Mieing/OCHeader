@class NSMutableArray, WCFinderVideoProducerMusicSearchRequest;

@interface WCFinderVideoProducerMusicSearchingOperation : WCFinderVideoProducerBaseOperation

@property (retain, nonatomic) NSMutableArray *searchRequestList;
@property (retain, nonatomic) WCFinderVideoProducerMusicSearchRequest *currentSearchRequest;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)operationDidStart;
- (void)operationDidStop;
- (void)didRequestToSearchNewKey:(id)a0;
- (void)didShowSearchResultMusic:(id)a0 atIndex:(long long)a1;
- (void)didSelectSearchResultMusic:(id)a0 atIndex:(long long)a1;
- (void)didStartPlayingSelectedSearchResultMusic;
- (void)didStopPlayingSelectedSearchResultMusic;
- (void).cxx_destruct;

@end

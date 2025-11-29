@class WCVideoProducerMusicPlayingOperation, NSString, NSMutableArray, OrderedDictionary;

@interface WCVideoProducerMusicSearchRequest : NSObject <NSCopying>

@property (copy, nonatomic) NSString *searchKey;
@property (retain, nonatomic) NSMutableArray *searchPlayingOperationList;
@property (retain, nonatomic) OrderedDictionary *showedSearchMusicListMap;
@property (retain, nonatomic) WCVideoProducerMusicPlayingOperation *currentSearchPlayingOperation;
@property (nonatomic) double searchRequestBeginTime;
@property (nonatomic) double searchRequestEndTime;

- (id)initWithSearchKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_searchResultDidFinish;
- (void)_searchResultDidShowMusic:(id)a0 atIndex:(long long)a1;
- (void)_searchResultDidSelectMusic:(id)a0 atIndex:(long long)a1;
- (void)_searchResultDidStartPlayingSelectedMusic;
- (void)_searchResultDidStopPlayingSelectedMusic;
- (void).cxx_destruct;

@end

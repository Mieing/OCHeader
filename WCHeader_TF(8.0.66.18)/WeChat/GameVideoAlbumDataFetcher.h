@protocol GameVideoAlbumDataFetcherDelegate;

@interface GameVideoAlbumDataFetcher : MMObject

@property (nonatomic) unsigned long long startTag;
@property (readonly, nonatomic) unsigned int pageSize;
@property (nonatomic) unsigned int totalCount;
@property (nonatomic) unsigned int newCount;
@property (nonatomic) BOOL isReachEnding;
@property (nonatomic) BOOL isRequesting;
@property (weak, nonatomic) id<GameVideoAlbumDataFetcherDelegate> delegate;

- (void)resetIndex;
- (void)fetchRecommendVideoList;
- (void)loadRecommendVideoListCache;
- (id)parseAlbumVideoItem:(id)a0;
- (void)fetchMoreVideoList;
- (id)parseRecommendTags:(id)a0;
- (id)parseTags:(id)a0;
- (void).cxx_destruct;

@end

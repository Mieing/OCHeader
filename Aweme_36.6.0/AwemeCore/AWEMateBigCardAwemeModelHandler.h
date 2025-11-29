@interface AWEMateBigCardAwemeModelHandler : NSObject

@property (nonatomic) long long feedType;

- (id)referString;
- (long long)followFromPageType;
- (id)initWithFeedType:(long long)a0;
- (id)randomMusicURL;
- (id)randomMusicURLList;
- (id)defaultMusicPlayUrl;
- (void)configureFeedRecommendCardModel:(id)a0 dataSource:(id)a1;
- (void)handleCardModelFromFeed:(id)a0 requestItemListCompletion:(id /* block */)a1;

@end

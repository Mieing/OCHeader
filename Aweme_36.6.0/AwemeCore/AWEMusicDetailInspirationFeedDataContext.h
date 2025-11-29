@interface AWEMusicDetailInspirationFeedDataContext : NSObject

@property (nonatomic) unsigned long long initFetchStatus;
@property (nonatomic) BOOL isRelatedFeedFirstFetched;

- (void)updateRelatedFeedFirstFetchedStatus:(BOOL)a0;

@end

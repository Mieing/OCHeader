@class WCFinderNativeDramaListDataProviderParams, NSString, NSData, NSMutableArray;
@protocol WCFinderNativeDramaListDataProviderDelegate;

@interface WCFinderNativeDramaListDataProvider : NSObject

@property (retain, nonatomic) WCFinderNativeDramaListDataProviderParams *params;
@property (retain, nonatomic) NSData *upLastBuffer;
@property (retain, nonatomic) NSData *downLastBuffer;
@property (nonatomic) BOOL downHasMore;
@property (nonatomic) BOOL upHasMore;
@property (nonatomic) int consumerMode;
@property (retain, nonatomic) NSMutableArray *fetchingDirection;
@property (retain, nonatomic) NSMutableArray *fetchingCGI;
@property (weak, nonatomic) id<WCFinderNativeDramaListDataProviderDelegate> delegate;
@property (copy, nonatomic) NSString *fetchListErrorMessage;

- (id)initWithParams:(id)a0;
- (BOOL)isFetching;
- (void)fetchWithEpisodeID:(unsigned long long)a0 direction:(unsigned long long)a1;
- (void)fetchWithEpisodeID:(unsigned long long)a0;
- (void)_fetchWithDirection:(unsigned long long)a0 episodeID:(unsigned long long)a1;
- (void)_fetchSingleEpisode:(unsigned long long)a0;
- (void)_fetchSingleEpisodeWithJSParams:(id)a0;
- (void)_didFetichSIngleEpisode:(id)a0 force:(BOOL)a1;
- (void)_updateObjects:(id)a0 targetEpisodeID:(unsigned long long)a1 direction:(unsigned long long)a2;
- (id)_contentVMWithDataItem:(id)a0;
- (void).cxx_destruct;

@end

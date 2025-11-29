@class NSString, NSData, MMBGMUniqueMutableArray, MMBGMSelectedConfig, MMBGMPanelPublishContext;
@protocol MMBGMSearchViewModelDelegate;

@interface MMBGMSearchViewModel : NSObject

@property (retain, nonatomic) MMBGMUniqueMutableArray *searchResults;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *currentSearchKey;
@property (nonatomic) unsigned long long currentSearchId;
@property (nonatomic) unsigned int currentPageOffset;
@property (copy, nonatomic) NSData *sessionBuffer;
@property (retain, nonatomic) MMBGMSelectedConfig *config;
@property (weak, nonatomic) id<MMBGMSearchViewModelDelegate> delegate;
@property (retain, nonatomic) MMBGMPanelPublishContext *publishContext;

- (id)init;
- (BOOL)searchMusicWithKey:(id)a0;
- (void)loadMoreData;
- (void)reset;
- (void)_doStoryBGMSearchCGIWithKey:(id)a0 isFirstPage:(BOOL)a1;
- (unsigned long long)getMaterialDuration;
- (BOOL)hasMoreData;
- (unsigned long long)dataCount;
- (id)dataAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;

@end

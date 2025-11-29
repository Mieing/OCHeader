@class NSString, NSPredicate, CAKAlbumInsightItem, ILASearchQuery;

@interface CAKAlbumSearchOperation : NSOperation

@property (retain, nonatomic) CAKAlbumInsightItem *item;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) ILASearchQuery *query;
@property (retain, nonatomic) NSPredicate *predicate;
@property (nonatomic) BOOL dateAscending;
@property (nonatomic) unsigned long long textParser;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ queryCompletion;

- (id)fetchAssetsWithIds:(id)a0 error:(id *)a1;
- (void)searchWithInsightItem:(id)a0;
- (id)initWithInsightItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithText:(id)a0;
- (id)initWithQuery:(id)a0;
- (void)main;
- (void)searchWithText:(id)a0;
- (void)searchWithQuery:(id)a0;

@end

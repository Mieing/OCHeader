@class NSArray, NSString;

@interface IESLiveFeedDrawerHistoryCardModel : NSObject <IESLiveFeedDrawerItemProtocol>

@property (copy, nonatomic) NSArray *items;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (id)initWithFeedItems:(id)a0 hasMore:(BOOL)a1;
- (void).cxx_destruct;
- (Class)sectionClass;

@end

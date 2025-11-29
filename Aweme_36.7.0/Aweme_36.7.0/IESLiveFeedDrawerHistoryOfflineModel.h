@class NSString, FeedItem;

@interface IESLiveFeedDrawerHistoryOfflineModel : NSObject <IESLiveFeedDrawerItemProtocol, IESLiveFeedDrawerHistoryModelProtocol>

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) FeedItem *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (id)initWithFeedItem:(id)a0;
- (void).cxx_destruct;
- (Class)sectionClass;

@end

@class NSString, FeedItem;

@interface IESLiveFeedDrawerOperationBannerItemModel : NSObject <IESLiveFeedDrawerItemProtocol>

@property (retain, nonatomic) FeedItem *item;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (void).cxx_destruct;
- (Class)sectionClass;

@end

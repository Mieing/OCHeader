@class NSString;

@interface IESLiveFeedDrawerHistoryMoreModel : NSObject <IESLiveFeedDrawerItemProtocol>

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (void).cxx_destruct;
- (Class)sectionClass;

@end

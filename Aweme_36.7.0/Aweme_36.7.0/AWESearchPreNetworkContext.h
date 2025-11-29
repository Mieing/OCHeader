@class NSString, AWEEcomSearchStateStore, NSDictionary;

@interface AWESearchPreNetworkContext : NSObject

@property (nonatomic) BOOL isFromECommerce;
@property (nonatomic) BOOL isFromSaas;
@property (retain, nonatomic) AWEEcomSearchStateStore *stateStore;
@property (nonatomic) BOOL isFromExplore;
@property (copy, nonatomic) NSString *refer;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *gid;
@property (copy, nonatomic) NSString *enterCommentId;
@property (copy, nonatomic) NSString *commentQueryId;
@property (copy, nonatomic) NSString *authorId;
@property (copy, nonatomic) NSString *keyword;
@property (retain, nonatomic) NSDictionary *predictFetchParams;
@property (nonatomic) BOOL shouldStoreHistory;
@property (weak, nonatomic) id customContext;
@property (nonatomic) unsigned long long tabType;

- (void).cxx_destruct;

@end

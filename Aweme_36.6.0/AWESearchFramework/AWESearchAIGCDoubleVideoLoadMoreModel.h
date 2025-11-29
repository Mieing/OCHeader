@class NSString, NSArray, NSDictionary, AWESearchAIGCLoadMoreDataManager;

@interface AWESearchAIGCDoubleVideoLoadMoreModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long viewType;
@property (copy, nonatomic) NSString *doubleColumnRootCardId;
@property (nonatomic) long long doubleColumnPerDisplayCount;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *searchId;
@property (copy, nonatomic) NSString *conversationId;
@property (copy, nonatomic) NSString *rootCardId;
@property (copy, nonatomic) NSString *keyWord;
@property (nonatomic) long long maxDisplayCount;
@property (nonatomic) long long offset;
@property (copy, nonatomic) NSArray *foldIdList;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *doubleColumnSearchQuery;
@property (copy, nonatomic) NSArray *doubleVideoCmds;
@property (copy, nonatomic) NSString *searchUniqueId;
@property (nonatomic) long long conversationRank;
@property (copy, nonatomic) NSDictionary *logPb;
@property (nonatomic) BOOL doubleColumnSubcardHasMore;
@property (copy, nonatomic) NSString *cmdWaitId;
@property (copy, nonatomic) NSArray *awemeIdList;
@property (nonatomic) long long cmdWaitCount;
@property (retain, nonatomic) AWESearchAIGCLoadMoreDataManager *dataManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

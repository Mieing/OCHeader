@class NSDictionary, NSString, NSArray;

@interface AFDLocalDataSyncRequestModel : NSObject

@property (nonatomic) long long syncType;
@property (nonatomic) long long source;
@property (copy, nonatomic) NSDictionary *tableDictionary;
@property (nonatomic) BOOL isLoadMore;
@property (copy, nonatomic) NSString *syncParams;
@property (copy, nonatomic) NSDictionary *queryParam;
@property (copy, nonatomic) NSString *pageParamsStr;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSArray *fullSyncTablenames;
@property (copy, nonatomic) NSString *tracingInfo;
@property (nonatomic) long long receiveTime;

- (id)initWithSource:(long long)a0 syncType:(long long)a1;
- (void).cxx_destruct;

@end

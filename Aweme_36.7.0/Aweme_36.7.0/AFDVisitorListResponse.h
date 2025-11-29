@class NSArray;

@interface AFDVisitorListResponse : AWEBaseApiModel

@property (retain, nonatomic) NSArray *freshVisitors;
@property (retain, nonatomic) NSArray *historyVisitors;
@property (nonatomic) unsigned long long nextCursorFresh;
@property (nonatomic) unsigned long long nextCursorHistory;
@property (nonatomic) unsigned long long unreadCursor;
@property (nonatomic) BOOL hasMoreFresh;
@property (nonatomic) BOOL hasMoreHistory;
@property (nonatomic) unsigned long long totalCountFresh;
@property (nonatomic) unsigned long long totalCountHistory;
@property (nonatomic) unsigned long long filterCountFresh;
@property (nonatomic) unsigned long long filterCountHistory;
@property (copy, nonatomic) NSArray *validCacheUIDs;

+ (id)freshVisitorsJSONTransformer;
+ (id)historyVisitorsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

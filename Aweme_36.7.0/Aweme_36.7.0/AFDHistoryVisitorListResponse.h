@class NSArray;

@interface AFDHistoryVisitorListResponse : AWEBaseApiModel

@property (retain, nonatomic) NSArray *historyVisitors;
@property (nonatomic) unsigned long long nextCursorHistory;
@property (nonatomic) unsigned long long unreadCursor;
@property (nonatomic) BOOL hasMoreHistory;
@property (nonatomic) unsigned long long filterCountHistory;

+ (id)historyVisitorsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

@class NSArray, NSString;

@interface AFDFreshVisitorListResponse : AWEBaseApiModel

@property (retain, nonatomic) NSArray *freshVisitors;
@property (nonatomic) unsigned long long nextCursorFresh;
@property (nonatomic) unsigned long long unreadCursor;
@property (nonatomic) BOOL hasMoreFresh;
@property (nonatomic) unsigned long long filterCountFresh;
@property (copy, nonatomic) NSString *filterText;

+ (id)freshVisitorsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

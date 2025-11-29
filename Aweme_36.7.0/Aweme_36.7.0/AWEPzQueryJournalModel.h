@class NSString, NSArray, NSDate, NSNumber;

@interface AWEPzQueryJournalModel : NSObject

@property (copy, nonatomic) NSString *callTraceId;
@property (copy, nonatomic) NSString *callTraceType;
@property (copy, nonatomic) NSString *componentID;
@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSArray *scopes;
@property (copy, nonatomic) NSArray *excludedScopes;
@property (nonatomic) BOOL scopeShareRecord;
@property (retain, nonatomic) NSDate *afterDate;
@property (nonatomic) long long limitCount;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSNumber *consume;

- (void).cxx_destruct;
- (id)init;

@end

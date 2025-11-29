@class NSArray;

@interface AWEPzRecordCacheQueryResult : NSObject

@property (nonatomic) long long resultType;
@property (copy, nonatomic) NSArray *journalRows;
@property (readonly, nonatomic) BOOL success;

+ (id)instanceWithResultType:(long long)a0 journalRows:(id)a1;

- (void).cxx_destruct;

@end

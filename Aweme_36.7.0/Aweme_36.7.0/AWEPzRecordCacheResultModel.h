@class NSArray;

@interface AWEPzRecordCacheResultModel : NSObject

@property (nonatomic) BOOL isFullData;
@property (copy, nonatomic) NSArray *journalRows;
@property (copy, nonatomic) NSArray *cTagRows;
@property (copy, nonatomic) NSArray *sTagRows;

- (void).cxx_destruct;
- (id)description;

@end

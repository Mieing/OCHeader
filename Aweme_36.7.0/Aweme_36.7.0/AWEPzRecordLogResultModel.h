@class NSArray, AWEPzJournalRow;

@interface AWEPzRecordLogResultModel : NSObject

@property (retain, nonatomic) AWEPzJournalRow *journalRow;
@property (copy, nonatomic) NSArray *cTagRows;
@property (copy, nonatomic) NSArray *sTagRows;

- (void).cxx_destruct;

@end

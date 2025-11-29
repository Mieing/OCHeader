@class NSArray;

@interface AWEAnchorSearchHistoryViewModel : NSObject

@property (nonatomic) long long anchorType;
@property (copy, nonatomic) NSArray *historyList;

- (void)saveSearchHistoryResultWithKeyword:(id)a0;
- (id)initWithAnchorBusinessType:(long long)a0;
- (void)deleteHistoryItemWithKeyWord:(id)a0;
- (void).cxx_destruct;
- (void)deleteAllHistory;

@end

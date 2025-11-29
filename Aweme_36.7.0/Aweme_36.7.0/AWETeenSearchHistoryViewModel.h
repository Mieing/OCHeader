@class NSArray, NSString, AWEStorage;

@interface AWETeenSearchHistoryViewModel : NSObject

@property (copy, nonatomic) NSArray *historyList;
@property (copy, nonatomic) NSString *cacheKey;
@property (retain, nonatomic) AWEStorage *storage;

+ (void)deleteGuestHistoryKeyWord;

- (void)saveKeyword:(id)a0;
- (void)deleteAllKeywords;
- (void)deleteKeyword:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

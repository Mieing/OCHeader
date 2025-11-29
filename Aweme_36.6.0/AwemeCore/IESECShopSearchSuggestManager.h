@class NSString, NSDictionary, NSMutableArray;

@interface IESECShopSearchSuggestManager : NSObject {
    NSMutableArray *_searchRecords;
    NSString *_currentSessionID;
    NSMutableArray *_sessionRecords;
}

@property (copy, nonatomic) NSString *pageSource;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSDictionary *additionalParameters;

- (id)searchRecordsDescription;
- (id)sessionRecordsDescription;
- (void)fetchSearchSuggestWithParameter:(id)a0 completionHandler:(id /* block */)a1;
- (void)addSearchRecordWithKeyword:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)resetSession;

@end

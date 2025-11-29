@class NSDictionary, NSString, NSMutableArray;
@protocol AWEHttpTask;

@interface AWETeenSearchSugDataManager : NSObject

@property (weak, nonatomic) id<AWEHttpTask> task;
@property (retain, nonatomic) NSDictionary *logPassback;
@property (copy, nonatomic) NSString *searchKeyWord;
@property (retain, nonatomic) NSMutableArray *sugWordList;

- (void)stopSugQuery;
- (void)mathchAllSugWordToSearchWordWithModel:(id)a0;
- (id)matchSugwordToSearhWord:(id)a0;
- (void)fetchSugWithQuery:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end

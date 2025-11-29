@class NSString, NSDictionary, IESLiveRecommendWordQueryRecordModel, NSMutableArray;

@interface IESLiveSearchSugManager : HTSLiveApi

@property (retain, nonatomic) NSMutableArray *dataArray;
@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSString *query;
@property (retain, nonatomic) IESLiveRecommendWordQueryRecordModel *wordsQueryRecord;
@property (copy, nonatomic) NSDictionary *logPassback;

- (void)fetchSearchSugWithQuery:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end

@class NSString, SECDataClassifyQuery;
@protocol SECYcavClassifyDataSource;

@interface SECYcavClassifyTask : NSObject

@property (retain, nonatomic) id<SECYcavClassifyDataSource> datasource;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) SECDataClassifyQuery *query;
@property (copy, nonatomic) NSString *taskId;

+ (id)taskAllTypesWithDataSource:(id)a0 completionHandler:(id /* block */)a1;
+ (id)taskWithQueryTypes:(id)a0 withDatasource:(id)a1 completionHandler:(id /* block */)a2;

- (void)configWithQuery:(id)a0 dataSource:(id)a1 completionHandler:(id /* block */)a2;
- (void)_finishWithResult:(id)a0;
- (void).cxx_destruct;
- (void)finishWithResult:(id)a0;

@end

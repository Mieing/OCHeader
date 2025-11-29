@class AWEShowAdInsertBaseConfig;

@interface AWEShowInsertAdCenterInsert : NSObject

@property (retain, nonatomic) AWEShowAdInsertBaseConfig *config;
@property (copy, nonatomic) id /* block */ currentModel;
@property (copy, nonatomic) id /* block */ currentDataSource;
@property (copy, nonatomic) id /* block */ currentTableView;
@property (copy, nonatomic) id /* block */ currentIndex;

- (id)initWithInsertConfig:(id)a0;
- (void)insertWithModel:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end

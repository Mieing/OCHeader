@class NSString, IESECWinVideoProductDataController, IESECWinTabListModel, NSMutableArray;

@interface IESECWinVideoProductDataServiceImpl : NSObject <AWEAwemeDetailTableViewControllerDelegate, IESECWinVideoProductDataService>

@property (retain, nonatomic) IESECWinVideoProductDataController *dataController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESECWinTabListModel *tabList;
@property (retain, nonatomic) NSMutableArray *tabDataSource;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)initWithWinContext:(id)a0 tabListModel:(id)a1 tabViewController:(id)a2;
- (id)getAWEAweweModelsWithTabListModel:(id)a0 AwemeModelString:(id)a1;
- (void)enterVideoFeedWithAwemeModelString:(id)a0 index:(long long)a1 winContext:(id)a2 showGoodsDetail:(BOOL)a3;
- (void).cxx_destruct;

@end

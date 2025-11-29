@class NSArray, NSMutableArray, CMessageWrap;

@interface BatchTransCDNProcessor : UploadStateProcessor

@property (retain, nonatomic) NSArray *dataList;
@property (retain, nonatomic) CMessageWrap *msgWrap;
@property (retain, nonatomic) NSMutableArray *uploadTaskList;
@property (retain, nonatomic) NSMutableArray *arrFavTranCDNItem;

- (id)initWithContext:(id)a0;
- (void)start;
- (id)getStateName;
- (void)sendBatchTransRequest:(id)a0;
- (void)HandleBatchTransCDNSucc:(id)a0;
- (id)genBatchTransItemArrayWithDataList:(id)a0 withClientStrId:(id)a1;
- (void).cxx_destruct;

@end

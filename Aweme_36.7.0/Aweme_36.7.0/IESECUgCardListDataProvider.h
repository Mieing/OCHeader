@class NSMutableDictionary, IESECUgCardListRequestParams, NSDictionary, NSString, NSMutableArray;

@interface IESECUgCardListDataProvider : NSObject <IESECContentListDataProviderProtocol>

@property (retain, nonatomic) NSMutableArray *datas;
@property (retain, nonatomic) IESECUgCardListRequestParams *requestParams;
@property (retain, nonatomic) NSMutableArray *filterIds;
@property (retain, nonatomic) NSMutableDictionary *cellDisplayDict;
@property (copy, nonatomic) NSDictionary *reqResp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithClientParams:(id)a0;
- (void)firstRequestWithFinishBlock:(id /* block */)a0;
- (id)cellViewModelForIndexPath:(id)a0;
- (void)displayCellForIndexPath:(id)a0;
- (void)requestMoreWithFinishBlock:(id /* block */)a0;
- (void)processServerData:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (long long)numberOfSections;
- (long long)numberOfRowsInSection:(long long)a0;

@end

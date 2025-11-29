@class NSArray, NSMutableArray, AWEEnterpriseGoodsDetailDataController;

@interface AWEEnterpriseGoodsListViewModel : AWEEnterpriseIMMessageCardBaseViewModel

@property (nonatomic) long long showStatus;
@property (retain, nonatomic) NSMutableArray *goodsDataList;
@property (copy, nonatomic) NSArray *goodsRequestData;
@property (retain, nonatomic) AWEEnterpriseGoodsDetailDataController *detailDataController;

- (void)configDataWithContent:(id)a0 ext:(id)a1 localExt:(id)a2;
- (void)updateWithModel:(id)a0 needRequestData:(BOOL)a1;
- (long long)numberOfGoodsItem;
- (id)goodsDetailData;
- (void)transferToDetailPageWithIndex:(long long)a0;
- (void)p_requestGoodsDetail;
- (id)convertDictToModel:(id)a0;
- (void)p_updateGoodsDetail;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })contentSize;

@end

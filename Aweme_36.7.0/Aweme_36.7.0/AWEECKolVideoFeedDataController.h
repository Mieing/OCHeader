@class NSDictionary, NSString;

@interface AWEECKolVideoFeedDataController : AWEListDataController <IESECommerceKolVideoDataControllerProtocol>

@property (nonatomic) long long pageNum;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *kolEnterFrom;
@property (copy, nonatomic) NSDictionary *productParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)requestNextPageWithCompletion:(id /* block */)a0;
- (void)fetchECGoodsVideoListWithParameters:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)refreshWithCompletion:(id /* block */)a0;

@end

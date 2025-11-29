@class UIColor, NSString, IESECShopInnerFlowContext, IESECShopInnerFlowAdapter, IESECShopInnerFlowDiffableModel, IESECShopInnerFlowCardModel;

@interface IESECShopInnerFlowDataController : NSObject

@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL isRequestOnAir;
@property (retain, nonatomic) IESECShopInnerFlowCardModel *navbarModel;
@property (retain, nonatomic) IESECShopInnerFlowDiffableModel *diffableModel;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) NSString *paginationParams;
@property (retain, nonatomic) IESECShopInnerFlowContext *context;
@property (retain, nonatomic) IESECShopInnerFlowAdapter *adapter;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)requestNextPageWithParams:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)requestParams;

@end

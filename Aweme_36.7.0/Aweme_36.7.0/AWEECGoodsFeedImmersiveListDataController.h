@class NSString, NSMutableDictionary, IESECGoodsFeedImmersiveResponseModel;
@protocol IESECGoodsFeedImmersiveShowConfigProtocol;

@interface AWEECGoodsFeedImmersiveListDataController : AWEListDataController <AWEEGoodsFeedImmersiveListProtocol>

@property (retain, nonatomic) NSString *cursor;
@property (nonatomic) long long pageNum;
@property (retain, nonatomic) IESECGoodsFeedImmersiveResponseModel *lastResponseModel;
@property (retain, nonatomic) id<IESECGoodsFeedImmersiveShowConfigProtocol> config;
@property (nonatomic) BOOL didLoadFirstCard;
@property (retain, nonatomic) NSMutableDictionary *dataInitTimeMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)loadmoreHasMore;
- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)filterTypeForModel:(id)a0;
- (void)requestFirstCardWithCompletion:(id /* block */)a0;
- (void)requestRecommendWithCompletion:(id /* block */)a0;
- (id)getFilterString;
- (id)recommendURLString;
- (id)parseAwemeModel:(id)a0;
- (id)getDataInitTimeWithAwemeItemID:(id)a0;
- (void).cxx_destruct;
- (id)handleResponse:(id)a0;
- (id)initWithConfig:(id)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end

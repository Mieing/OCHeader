@class AWETheaterPageContext, AWETheaterRequestModel;

@interface AWEDynamicTheaterDataController : AWEBaseDataController

@property (retain, nonatomic) AWETheaterRequestModel *requestModel;
@property (retain, nonatomic) AWETheaterPageContext *context;

- (void)requestWithCompletion:(id /* block */)a0;
- (void)refreshHistoryWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end

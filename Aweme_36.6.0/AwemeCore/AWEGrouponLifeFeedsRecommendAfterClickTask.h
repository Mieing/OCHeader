@class NSDictionary, AWEGrouponLifeFeedsPageContext, AWEGrouponLifeFeedsBaseComponentVM, AWEGrouponLifeFeedsBaseComponentView;
@protocol AWEHttpTask;

@interface AWEGrouponLifeFeedsRecommendAfterClickTask : NSObject

@property (weak, nonatomic) AWEGrouponLifeFeedsPageContext *pageContext;
@property (weak, nonatomic) AWEGrouponLifeFeedsBaseComponentView *componentView;
@property (weak, nonatomic) AWEGrouponLifeFeedsBaseComponentVM *viewModel;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (copy, nonatomic) NSDictionary *recommendData;
@property (retain, nonatomic) id<AWEHttpTask> requestTask;

- (id)initWithPageContext:(id)a0;
- (void)runWithComponentView:(id)a0 viewModel:(id)a1 completeBlock:(id /* block */)a2;
- (void)didFetchRealTimeData:(id)a0;
- (id)requestForRecommendAfterClickWithRealtimeData:(id)a0;
- (void)didFinishRequestData:(id)a0 error:(id)a1;
- (id)cardInfoWithViewModel:(id)a0 isClick:(BOOL)a1;
- (void)invokeCompleteBlock:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)cancel;

@end

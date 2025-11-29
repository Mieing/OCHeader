@class NSArray, LLDitoNode, IESLLPOIDetailNGPOIMallFilterComponentView;

@interface IESLLPOIDetailNGPOIMallFilterComponentViewModel : LLDitoComponentViewModel

@property (weak, nonatomic) LLDitoNode *node;
@property (nonatomic) double originHeight;
@property (nonatomic) double currentHeight;
@property (nonatomic) BOOL isDataError;
@property (weak, nonatomic) IESLLPOIDetailNGPOIMallFilterComponentView *componentView;
@property (copy, nonatomic) NSArray *filterModels;

- (id)extraParams;
- (id)channelParams;
- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void)didHalfContainerOffsetChange:(id)a0 offset:(double)a1;
- (void)vsdContainer:(id)a0 offsetChange:(double)a1;
- (void)didClickTag:(id /* block */)a0;
- (id)merchantParams;
- (void)showFilterIfNeed;
- (void)trackDataError:(id)a0;
- (void)initFilterParams;
- (void)setParamsIntoSessionInfo:(id)a0;
- (void)scrollTagsViewToTopAnimiated:(BOOL)a0 delayMilliSeconds:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;
- (id)requestParams;

@end

@class NSDictionary, NSString, IESLLPOIDetailInfoPOIFollowViewModel;

@interface IESLLPOIDetailNGFollowPOIComponentViewModel : LLDitoComponentViewModel <IESLLPOIDetailInfoPOIFollowDelegate>

@property (retain, nonatomic) NSDictionary *nodeData;
@property (retain, nonatomic) IESLLPOIDetailInfoPOIFollowViewModel *bizViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (id)constData;
- (id)generalContext;
- (void)dispatchActionWithShowState:(BOOL)a0;
- (void)didTapFollowWithType:(long long)a0 completion:(id /* block */)a1;
- (void)didTapCollectGuide;
- (void)setupBizViewModel;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;
- (id)cardData;

@end

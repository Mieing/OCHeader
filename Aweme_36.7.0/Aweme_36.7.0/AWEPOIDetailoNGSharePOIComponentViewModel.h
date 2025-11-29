@class AWEPOIDetailInfoSimilarPOIShareViewModel, NSArray, NSDictionary, NSString;

@interface AWEPOIDetailoNGSharePOIComponentViewModel : DitoComponentViewModel <AWEPOIDetailInfoSimilarPOIShareDelegate>

@property (copy, nonatomic) NSArray *conversationUsers;
@property (retain, nonatomic) NSDictionary *nodeData;
@property (retain, nonatomic) AWEPOIDetailInfoSimilarPOIShareViewModel *bizViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void)didTapColletGuide;
- (void)setupBizViewModel;
- (id)currentNodeData;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;
- (void)didTapShare;

@end

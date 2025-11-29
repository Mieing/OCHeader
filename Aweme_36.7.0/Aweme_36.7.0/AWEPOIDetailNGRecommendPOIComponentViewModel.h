@class NSDictionary, NSString, AWEPOIDetailInfoSimilarPOIRecommendViewModel;

@interface AWEPOIDetailNGRecommendPOIComponentViewModel : DitoComponentViewModel <AWEPOIDetailInfoSimilarPOIRecommendDelegate>

@property (copy, nonatomic) NSDictionary *collectTextConfig;
@property (retain, nonatomic) AWEPOIDetailInfoSimilarPOIRecommendViewModel *bizViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)poiDetail;
- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void)didTapColletGuide;
- (void)setupBizViewModel;
- (id)clickCollectSchema;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end

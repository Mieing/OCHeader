@class NSDictionary, NSString, IESECSliceXAction;

@interface IESECSliceXShopRecommendScrollView : IESECSliceXScrollElementView <UIScrollViewDelegate>

@property (nonatomic) BOOL firstScrollToEnd;
@property (nonatomic) BOOL allowScrollToShop;
@property (nonatomic) BOOL hasTrackScroll;
@property (retain, nonatomic) IESECSliceXAction *scrollToShopAction;
@property (retain, nonatomic) NSDictionary *slideParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackSlide;
- (BOOL)updateWithSliceXElement:(id)a0 error:(id *)a1;
- (void)scrollToEnd;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)initWithContext:(id)a0;
- (void)scrollViewDidScroll:(id)a0;

@end

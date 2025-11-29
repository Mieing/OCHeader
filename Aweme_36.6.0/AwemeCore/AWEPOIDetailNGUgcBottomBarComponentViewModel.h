@class NSString, AWEPOIDetailNGUgcBottomBarComponentView, AWEPOIDetailResponse;

@interface AWEPOIDetailNGUgcBottomBarComponentViewModel : DitoComponentViewModel

@property (nonatomic) BOOL isShow;
@property (copy, nonatomic) NSString *creationIDForToComment;
@property (copy, nonatomic) NSString *cardKey;
@property (nonatomic) long long cardPriority;
@property (nonatomic) BOOL isHighestPriority;
@property (retain, nonatomic) AWEPOIDetailResponse *poiDetail;
@property (weak, nonatomic) AWEPOIDetailNGUgcBottomBarComponentView *componentView;

- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (id)trackingParamsForToComment;
- (void)showUGCBar:(BOOL)a0;
- (void)bottomBarDidReceiveResponse:(id)a0;
- (void)trackBottomBarWithResponse:(id)a0;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end

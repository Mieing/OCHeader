@class NSString, NSMutableArray, UIView;
@protocol WCFinderLiveHomePageAggregationECGridGroupDelegate;

@interface WCFinderLiveHomePageAggregationECGridGroup : UIView <MMFinderLiveAggregationCardGridProductInfoViewDelegate>

@property (weak, nonatomic) id<WCFinderLiveHomePageAggregationECGridGroupDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *productGroup;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) NSMutableArray *productViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateWithGroup:(id)a0 hotSellingOptions:(id)a1;
- (void)onFinderLiveGenericProductInfoViewStartHotSellingAnimation:(id)a0;
- (void)onFinderLiveGenericProductInfoViewStopHotSellingAnimation:(id)a0;
- (BOOL)enableFinderLiveGenericProductInfoViewHotSellingAnimation:(id)a0;
- (void).cxx_destruct;

@end

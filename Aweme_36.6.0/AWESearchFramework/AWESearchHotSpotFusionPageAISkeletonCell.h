@class UIStackView, NSString, UILabel, UIView, AWESearchHotSpotFusionPageShimmerView;

@interface AWESearchHotSpotFusionPageAISkeletonCell : UIViewController <AWESearchCachalotCardViewProtocol, AWEModernFeedCellControllerProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIStackView *lineStackView;
@property (retain, nonatomic) AWESearchHotSpotFusionPageShimmerView *shimmerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) Class cardClass;

+ (double)modernFeedCellPreferedHeightForModel:(id)a0 width:(double)a1;
+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;
+ (double)modernFeedCellPreferedMarginForModel:(id)a0;

- (void)componentWillDisplay;
- (void)componentDidEndDisplay;
- (void)p_configUI;
- (void)p_setupLineStackView;
- (id)p_createLineView;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)componentView;
- (void)updateWithViewModel:(id)a0;
- (void)updateWithModel:(id)a0;

@end

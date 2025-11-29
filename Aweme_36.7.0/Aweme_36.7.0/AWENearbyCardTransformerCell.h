@class UIView, AWENearbySkyLightViewController, AWENearbyCardTransformerCellModel, NSString, AWECommonFeedSectionContext, AWEBinding, CAGradientLayer, AWENearbyCardTransformerSkeletonView;
@protocol AWECommonFeedCellModelProtocol;

@interface AWENearbyCardTransformerCell : UICollectionViewCell <AWECommonFeedCellProtocol>

@property (retain, nonatomic) AWENearbySkyLightViewController *skyLightViewController;
@property (retain, nonatomic) AWENearbyCardTransformerSkeletonView *skeletonView;
@property (retain, nonatomic) UIView *moduleBar;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) AWENearbyCardTransformerCellModel *customCellModel;
@property (retain, nonatomic) AWEBinding *settingsBinding;
@property (retain, nonatomic) AWEBinding *skyLightBinding;
@property (retain, nonatomic) id<AWECommonFeedCellModelProtocol> cellModel;
@property (retain, nonatomic) AWECommonFeedSectionContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configCellWithContext:(id)a0 cellModel:(id)a1;
- (void)updateLynxView;
- (void)onLynxLoadFail:(id)a0;
- (void).cxx_destruct;
- (void)updateBackgroundColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)hasVideo;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupUI;

@end

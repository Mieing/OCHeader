@class NSString, LOTAnimationView, UIImageView, UILabel, AWEProfileHeaderContext;
@protocol AWEProfileHeaderUpstairHintCellDelegate;

@interface AWEProfileHeaderUpstairHintCell : UICollectionViewCell <AWEProfileHeaderViewVisibilityProtocol, AWEProfileHeaderCellProtocol>

@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) LOTAnimationView *iconView;
@property (nonatomic) BOOL readyForShake;
@property (nonatomic) BOOL hasTrackedEntranceShow;
@property (nonatomic) BOOL needResetNaviAlpha;
@property (retain, nonatomic) UIImageView *middleImageView;
@property (retain, nonatomic) UIImageView *leftSideImageView;
@property (retain, nonatomic) UIImageView *rightSideImageView;
@property (weak, nonatomic) id<AWEProfileHeaderUpstairHintCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tabBarDidChangeNotification:(id)a0;
- (id)eCommerceEntranceLocation;
- (void)configWithHeaderContext:(id)a0;
- (void)profilePageDidVerticallyScrollWithOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)profilePageEndVerticallyScrollWithOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)headerDidHide;
- (void)headerDidBecomeVisible;
- (void)updateTitleWithOffsetY:(double)a0;
- (void)didClickTitleBtn;
- (void)setupCurveImage;
- (void)updateProfileNavButtonAlphaWithOffsetY:(double)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end

@class AWEUserProfileRecommendView, NSString, AWEProfileHeaderContext, UITapGestureRecognizer;
@protocol AWEProfileHeaderProfileRecommendCollectionViewCellDelegate;

@interface AWEProfileHeaderProfileRecommendCollectionViewCell : UICollectionViewCell <AWEProfileHeaderCellProtocol>

@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (retain, nonatomic) AWEUserProfileRecommendView *profileRecommendView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (weak, nonatomic) id<AWEProfileHeaderProfileRecommendCollectionViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__setupUI;
- (void)onTapGestureAction:(id)a0;
- (void)handleTapGestureWithLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)configWithHeaderContext:(id)a0;
- (void)__updateProfileRecommendViewWithContext:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

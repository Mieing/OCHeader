@class UITapGestureRecognizer, NSString, UIView;
@protocol AWEProfileLuckyCatBannerViewProtocol;

@interface AWEProfileHeaderLuckyCatBannerCell : UICollectionViewCell <AWEProfileHeaderCellProtocol>

@property (retain, nonatomic) UIView<AWEProfileLuckyCatBannerViewProtocol> *bannerView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUserProfileDYProfileHeaderViewDOUYINLiteAdaperClass;

- (void)onTapGestureAction:(id)a0;
- (void)handleTapGestureWithLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)aAWEUserProfileDYProfileHeaderViewDOUYINLiteAdaper;
- (void)bannerWillAppear;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end

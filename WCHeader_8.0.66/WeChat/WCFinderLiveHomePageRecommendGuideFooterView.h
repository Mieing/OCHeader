@class UIImageView, UILabel, WCFinderLiveStreamJumpModel, UIView;
@protocol WCFinderLiveHomePageRecommendGuideFooterViewDelegate;

@interface WCFinderLiveHomePageRecommendGuideFooterView : UICollectionReusableView

@property (retain, nonatomic) WCFinderLiveStreamJumpModel *jumpModel;
@property (retain, nonatomic) UIView *scrollLabelContainer;
@property (retain, nonatomic) UILabel *swipeEducationLabel;
@property (retain, nonatomic) UIImageView *labelArrowView;
@property (weak, nonatomic) id<WCFinderLiveHomePageRecommendGuideFooterViewDelegate> delegate;

+ (id)footerIdentifier;
+ (double)footerWidth;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateWithJumpModel:(id)a0;
- (void)layoutUI;
- (void)initView;
- (id)accessibilityLabel;
- (void)onScrollEducationAction:(id)a0;
- (void).cxx_destruct;

@end

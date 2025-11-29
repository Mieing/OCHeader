@class CAGradientLayer, AWEPOIProductSecondPageModel, UIImageView, UIView, UILabel;

@interface AWEPOIShelfListSeeMoreView : UIView

@property (retain, nonatomic) AWEPOIProductSecondPageModel *model;
@property (nonatomic) BOOL isJumpPage;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIView *clickView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (copy, nonatomic) id /* block */ tapHandler;

- (void)clickExpandView;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setupView;
- (void)updateData;
- (void)updateModel:(id)a0;

@end

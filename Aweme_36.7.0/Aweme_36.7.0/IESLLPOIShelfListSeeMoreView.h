@class CAGradientLayer, UIImageView, UIView, UILabel, IESLLPOIProductSecondPageModel;

@interface IESLLPOIShelfListSeeMoreView : UIView

@property (retain, nonatomic) IESLLPOIProductSecondPageModel *model;
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

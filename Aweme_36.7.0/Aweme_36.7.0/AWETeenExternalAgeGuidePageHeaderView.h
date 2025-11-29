@class UILabel;

@interface AWETeenExternalAgeGuidePageHeaderView : UIView

@property (retain, nonatomic) UILabel *leftTitleLabel;
@property (retain, nonatomic) UILabel *rightTitleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (nonatomic) BOOL isSmallScreen;
@property (nonatomic) double leftTitleFontSize;
@property (nonatomic) double rightTitleFontSize;
@property (nonatomic) double subTitleFontSize;
@property (nonatomic) struct CGSize { double width; double height; } leftTitleSize;

- (void)p_setupViews;
- (id)initWithLeftTitle:(id)a0 rightTitle:(id)a1 subTitle:(id)a2;
- (void).cxx_destruct;

@end

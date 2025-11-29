@class AWEUserLoginTitleViewModel, UILabel;

@interface AWEUserLoginTitleView : UIView

@property (retain, nonatomic) AWEUserLoginTitleViewModel *model;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UILabel *guideTitleLabel;

- (void)setupTitleLabel:(id)a0 font:(id)a1;
- (void)updateLabelFontColor;
- (void)setupSubtitleLabel:(id)a0 font:(id)a1;
- (void)setupGuideTitleLabel:(id)a0 font:(id)a1;
- (void)layoutOneLabel;
- (void)layoutTwoLabel;
- (void)layoutThreeLabel;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithText:(id)a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)setupLabel;

@end

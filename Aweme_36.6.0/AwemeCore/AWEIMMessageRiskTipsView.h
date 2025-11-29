@class AWEIMLinkTextUtility, UIImageView, UILabel, UITapGestureRecognizer;
@protocol AWEIMMessageRiskModelProtocol;

@interface AWEIMMessageRiskTipsView : UIView

@property (retain, nonatomic) id<AWEIMMessageRiskModelProtocol> model;
@property (retain, nonatomic) UITapGestureRecognizer *tapGes;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) AWEIMLinkTextUtility *linkTextUtility;

- (void)configWithModel:(id)a0;
- (void)p_addTapGes;
- (void)p_tapAction;
- (id)p_attributedStringWithText:(id)a0 textColor:(id)a1 textFont:(id)a2 firstLineHeadIndent:(long long)a3;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)p_updateFrame;

@end

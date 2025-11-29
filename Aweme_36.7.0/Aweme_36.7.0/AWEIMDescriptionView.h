@class YYLabel, AWEIMLinkTextUtility, UIImageView, NSString, UILabel, UIView, UITapGestureRecognizer;

@interface AWEIMDescriptionView : UIView <UIGestureRecognizerDelegate, IESIMDescriptionViewProtocol>

@property (retain, nonatomic) UITapGestureRecognizer *tapGes;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) double iconImageMarginLeft;
@property (retain, nonatomic) YYLabel *descAttributedLabel;
@property (retain, nonatomic) AWEIMLinkTextUtility *linkTextUtility;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL enableBlock;
@property (copy, nonatomic) id /* block */ tapHandleBlock;

- (void)configWithIcon:(id)a0 text:(id)a1 textColor:(id)a2 iconImageMarginLeft:(double)a3 shouldUseBackground:(BOOL)a4;
- (void)configWithIcon:(id)a0 iconSize:(struct CGSize { double x0; double x1; })a1 text:(id)a2 textFont:(id)a3 textColor:(id)a4 iconImageMarginLeft:(double)a5 shouldUseBackground:(BOOL)a6;
- (void)configWithDescriptionViewContext:(id)a0;
- (void)setDescriptLabelFont:(id)a0;
- (void)__setupUI;
- (id)p_attributedStringWithText:(id)a0 textColor:(id)a1 textFont:(id)a2 firstLineHeadIndent:(long long)a3;
- (void)__masUpdateWithIgnoringIcon:(BOOL)a0 iconSize:(struct CGSize { double x0; double x1; })a1;
- (void)__setupDescAttributedLabelWithContext:(id)a0;
- (void)__tapHandler;
- (void).cxx_destruct;
- (id)init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

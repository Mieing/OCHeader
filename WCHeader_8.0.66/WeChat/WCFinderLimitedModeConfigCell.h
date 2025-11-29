@class UIFont, UIImageView, UIView, MMUILabel;

@interface WCFinderLimitedModeConfigCell : MMTableViewCell {
    UIFont *m_titleLabelFont;
}

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *lineView;

+ (double)cellHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateWithTitle:(id)a0 subTitle:(id)a1 pos:(long long)a2;
- (void)makeTitleLabelFontSizeToFix:(unsigned long long)a0;
- (BOOL)checkTitleLabelCrossLine;
- (void)showBottomLine:(BOOL)a0;
- (void)initUI;
- (void).cxx_destruct;

@end

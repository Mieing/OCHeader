@class NSString, UIImageView, NSArray, UILabel, UIView, UIButton;

@interface AWESearchAIGCSummaryEntryView : UIView

@property (nonatomic) BOOL needForbidActionReport;
@property (weak, nonatomic) UIView *entrySuperView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIImageView *gradientImageView;
@property (copy, nonatomic) NSString *darkIcon;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSArray *gradient;
@property (copy, nonatomic) NSArray *darkGradient;
@property (nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long defaultStyle;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) double iconAlpha;
@property (nonatomic) long long stayTime;
@property (nonatomic) long long expandTime;
@property (nonatomic) BOOL isSwitchStyling;
@property (nonatomic) BOOL isGuideStyle;
@property (nonatomic) double safeBottomMargin;
@property (copy, nonatomic) NSString *groupId;
@property (copy, nonatomic) NSString *searchId;
@property (copy, nonatomic) NSString *searchKeyword;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *aiChatButtonPosition;
@property (copy, nonatomic) NSString *btm;
@property (copy, nonatomic) id /* block */ aigcEntryViewClickBlock;

- (void)awe_themeDidChange:(long long)a0;
- (void)closeButtonClick;
- (void)themeChange;
- (id)gradientImageWithColors:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)setImageWithThemeStyle:(long long)a0;
- (double)tipsLabelFont;
- (void)retractGuideStyle;
- (void)switchToWeakStyleIfNeeded:(BOOL)a0;
- (id)initWithEntrySuperView:(id)a0;
- (void)aigcEntryViewClick;
- (void)switchToGuideStyleIfNeeded:(BOOL)a0;
- (double)searchSummaryEntryBottomMargin;
- (double)searchSummaryEntryHeight;
- (double)iconImageWidth;
- (double)iconTipsMargin;
- (double)searchSummaryEntryPaddingHorizontalLeft:(BOOL)a0;
- (double)searchSummaryEntryPaddingHorizontalRight:(BOOL)a0;
- (BOOL)hitSummaryButtonNewStyle;
- (void)updateSafeBottomMargin:(double)a0;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)updateStyle:(unsigned long long)a0;
- (void)resetStyle;
- (void)createUI;

@end

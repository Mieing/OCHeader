@class NSString, UIImageView, AWEAwemeModel, UILabel, UIView;

@interface AWECorrelationItemTag : UIView <AWECorrelationItemTagProtocol>

@property (retain, nonatomic) UIView *panelView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEAwemeModel *completeConvertModel;
@property (retain, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) id /* block */ action;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (nonatomic) unsigned long long tagType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)awe_themeDidChange:(long long)a0;
- (id)recordCategoryErrorInfo:(id)a0 andError:(id)a1;
- (id)recordExtraInfo:(id)a0 andError:(id)a1 andFilterDetail:(id)a2;
- (double)tagWidthWithTipsLabelWidth:(double)a0;
- (void)configWithModel:(id)a0 enterFrom:(id)a1;
- (void)updateWithFont:(id)a0;
- (void)updateToPlainTextStyle;
- (void)onTagClick:(id /* block */)a0;
- (void)updateWithFontSize:(double)a0 iconSize:(struct CGSize { double x0; double x1; })a1 labelHeight:(double)a2 containerHeight:(double)a3;
- (void)updateFeedTitleStandardizationStyle;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)defaultFont;
- (void)setupUI;
- (struct CGSize { double x0; double x1; })defaultIconSize;

@end

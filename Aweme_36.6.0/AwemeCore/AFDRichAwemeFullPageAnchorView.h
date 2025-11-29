@class UIImageView, AFDRichAwemeFullPageAnchorViewUIConfig, AFDRichAwemeFullPageAnchorModel, AWEAwemeModel, UILabel, UIView;

@interface AFDRichAwemeFullPageAnchorView : UIView

@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) long long type;
@property (copy, nonatomic) id /* block */ tapAnchorView;
@property (retain, nonatomic) AFDRichAwemeFullPageAnchorModel *anchorModel;
@property (retain, nonatomic) AFDRichAwemeFullPageAnchorViewUIConfig *uiConfig;
@property (copy, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UILabel *extraLabel;
@property (retain, nonatomic) UIView *verticalSeparator;
@property (retain, nonatomic) UIImageView *icon;
@property (nonatomic, getter=isShowingExtraLabel) BOOL showingExtraLabel;
@property (nonatomic) double descriptionLabelLeftSpacing;
@property (nonatomic) double seperatorHeight;
@property (nonatomic) double labelSpacing;
@property (nonatomic) double leftPadding;
@property (nonatomic) double rightPadding;
@property (nonatomic) double iconSize;

- (void)tapAnchor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (void)updateAnchorViewWithAnchorModel:(id)a0;
- (double)fullPageAnchorViewHeight;
- (double)extraAnchorViewWidth;
- (double)fullPageAnchorViewIconWidth;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)labelFont;
- (void)setUpUI;

@end

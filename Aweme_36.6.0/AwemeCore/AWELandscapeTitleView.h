@class AWEPageContext, AWELandscapeTitleViewTextSizeModel, UIImageView, AWEAwemeModel, UILabel, UIView, UITapGestureRecognizer;
@protocol AWELandscapePageContextInteractionProtocol, AWELandscapeTitleViewDelegate;

@interface AWELandscapeTitleView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *suffixLabel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *mixBackgroundView;
@property (retain, nonatomic) UIImageView *mixImageView;
@property (retain, nonatomic) UILabel *mixLabel;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEPageContext<AWELandscapePageContextInteractionProtocol> *pageContext;
@property (retain, nonatomic) AWELandscapeTitleViewTextSizeModel *textSizeModel;
@property (weak, nonatomic) id<AWELandscapeTitleViewDelegate> delegate;

- (void)updateWithModel:(id)a0 pageContext:(id)a1;
- (double)titleLabelWidth;
- (void)trackClickTitle;
- (void)configMixView;
- (void)handleClickTitle:(id)a0;
- (BOOL)canTitleBeClicked;
- (void)updateAccessibilityStatus;
- (BOOL)longVideoSupportClickTitle;
- (BOOL)fixContainerViewLayout;
- (id)suffixLabelFont;
- (double)suffixLabelWidth;
- (BOOL)isTitleFolding;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)titleLabelFont;
- (void)setupUI;

@end

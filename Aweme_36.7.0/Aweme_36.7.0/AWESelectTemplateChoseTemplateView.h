@class UIButton, UIImageView, UICollectionView, UILabel, AWESelectTemplateChoseTemplateViewConfig, UIView;
@protocol ACCTextLoadingViewProtcol;

@interface AWESelectTemplateChoseTemplateView : UIView

@property (retain, nonatomic) AWESelectTemplateChoseTemplateViewConfig *config;
@property (retain, nonatomic) UIView<ACCTextLoadingViewProtcol> *loadingView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *complianceNoticeButton;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *authorHintLabel;
@property (retain, nonatomic) UIView *authorAccessibilityView;
@property (retain, nonatomic) UICollectionView *templeteSelectCollectionView;
@property (retain, nonatomic) UILabel *errorLabel;
@property (retain, nonatomic) UIButton *retryButton;
@property (retain, nonatomic) UILabel *noTemplateHintLabel;
@property (copy, nonatomic) id /* block */ retryClick;
@property (copy, nonatomic) id /* block */ complianceNoticeClick;

- (void)hiddenAuthorInfomation:(BOOL)a0;
- (void)updateAuthorName:(id)a0;
- (void)hiddenComplianceNoticeButton:(BOOL)a0;
- (void)updateUIWithConfig;
- (id)topRoundCornerShapeLayerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)complianceNoticeButtonClick:(id)a0;
- (void)retryButtonClick:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setState:(unsigned long long)a0;
- (void)layoutSubviews;
- (id)initWithConfig:(id)a0;
- (void)setupUI;

@end

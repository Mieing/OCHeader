@class UIStackView, UIView, UIImageView, UIButton, YYLabel, AWEIMMessageConversation, AWEIMSecurityToastConfigModel, UIVisualEffectView;
@protocol AWEIMTopSecurityTipViewDelegate;

@interface AWEIMTopSecurityTipView : UIView

@property (retain, nonatomic) AWEIMSecurityToastConfigModel *config;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) UIStackView *titleStackView;
@property (retain, nonatomic) UIImageView *titleImageView;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) YYLabel *bottomContentLabel;
@property (retain, nonatomic) UIStackView *bottomButtonStackView;
@property (retain, nonatomic) UIView *lineView;
@property (nonatomic) double titleHeight;
@property (nonatomic) double contentHeight;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (weak, nonatomic) id<AWEIMTopSecurityTipViewDelegate> delegate;

- (void)refreshBackgroundColorWhileHasBackground:(BOOL)a0;
- (void)closeButtonClicked;
- (void)p_configUI;
- (void)p_chatBackgroundDidChangeNty:(id)a0;
- (void)configButtonsWithModel:(id)a0;
- (void)noti_themeDidChange:(id)a0;
- (void)render:(id)a0 context:(id)a1;
- (id)p_createButtonWithButtonModel:(id)a0 configModel:(id)a1;
- (void)configCloseButtonWithModel:(id)a0;
- (void)configTitleWithModel:(id)a0 maxWidth:(double)a1;
- (void)configContentWithModel:(id)a0 maxWidth:(double)a1;
- (void)configTitleIconWithModel:(id)a0;
- (BOOL)hasTitleImage;
- (id)textLayoutWithWidth:(double)a0 attributedText:(id)a1;
- (void)setupLabel:(id)a0 withTextLayout:(id)a1 width:(double)a2;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end

@class UIStackView, NSString, AWEIMDefaultFloatViewModel, UIImageView, UIButton, UIVisualEffectView, UILabel, AWEIMConversationContext;
@protocol AWEIMDefaultFloatViewDelegate;

@interface AWEIMDefaultFloatView : UIView <AWEIMDefaultFloatViewLayer>

@property (retain, nonatomic) AWEIMDefaultFloatViewModel *viewModel;
@property (retain, nonatomic) UIStackView *contentView;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIStackView *infoRegion;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIStackView *actionRegion;
@property (nonatomic) BOOL hadNotifyLayoutSubview;
@property (weak, nonatomic) id<AWEIMDefaultFloatViewDelegate> delegate;
@property (retain, nonatomic) AWEIMConversationContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__createComponents;
- (void)__configureComponents;
- (id)initWithViewModel:(id)a0 context:(id)a1;
- (void)__handleBackgroundImageUpdateNotification:(id)a0;
- (void)__createInfoRegion;
- (void)__createActionRegion;
- (void)__refreshBackgroundColor;
- (void)__handleConfirmButtonClicked:(id)a0;
- (void)__handleCloseButtonClicked:(id)a0;
- (struct CGSize { double x0; double x1; })__titleOriginSize;
- (BOOL)__hasBackgroundImage;
- (BOOL)titleLabelIsTruncated;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)viewDidLoad;

@end

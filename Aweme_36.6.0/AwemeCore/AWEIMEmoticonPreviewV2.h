@class UIView, NSString, NSURL, AWEIMEmoticonModel, CALayer, UIImageView, UIButton, BDImageView, MASConstraint, AWEIMEmoticonThemeModel, NSDictionary, UILabel;
@protocol AWEIMEmoticonPreviewDelegateProtocol;

@interface AWEIMEmoticonPreviewV2 : UIView <AWEIMEmoticonPreviewProtocol>

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) BDImageView *content;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowTipView;
@property (retain, nonatomic) MASConstraint *arrowLeadingConstraint;
@property (nonatomic) BOOL ignoreTheme;
@property (retain, nonatomic) UIView *shadowView;
@property (retain, nonatomic) CALayer *shadowLayer;
@property (retain, nonatomic) UIView *horizontalSeparateLineView;
@property (retain, nonatomic) UIView *verticalSeparateLineView;
@property (retain, nonatomic) UIButton *checkSeriesButton;
@property (retain, nonatomic) UIButton *addToCustomButton;
@property (retain, nonatomic) UIButton *deleteFromCustomButton;
@property (retain, nonatomic) UIButton *deleteDoubleCheckButton;
@property (retain, nonatomic) UIButton *sendButton;
@property (retain, nonatomic) AWEIMEmoticonThemeModel *theme;
@property (retain, nonatomic) AWEIMEmoticonModel *model;
@property (retain, nonatomic) NSURL *contentRemoteUrl;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long containerViewType;
@property (weak, nonatomic) id<AWEIMEmoticonPreviewDelegateProtocol> delegate;
@property (copy, nonatomic) NSDictionary *bizTrackInfos;
@property (copy, nonatomic) NSDictionary *convTrackInfos;
@property (nonatomic) unsigned long long previewScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)previewTitleTextColor;
+ (struct CGSize { double x0; double x1; })contentSizeWithoutName;

- (void)dyyy_saveButtonTapped:(id)a0;
- (void)p_hidePreview;
- (id)initWithContainerViewType:(long long)a0 ignoreTheme:(BOOL)a1;
- (struct CGSize { double x0; double x1; })sizeThatFitsContent:(id)a0;
- (void)setArrowTipAnchorPointAtTop:(struct CGPoint { double x0; double x1; })a0;
- (void)setArrowTipAnchorPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)__setupUIs:(BOOL)a0;
- (id)previewBackgroundColor;
- (void)creatButtonsWithContainer:(id)a0;
- (void)makeButtonsConstraintWithContainer:(id)a0;
- (void)p_addReloadBlock;
- (void)didTapCheckSeries:(id)a0;
- (void)didTapAddToCustom:(id)a0;
- (void)didTapDeleteFromCustom:(id)a0;
- (void)didTapSendButton:(id)a0;
- (id)__currentDisplayNameWithModel:(id)a0;
- (void)resetButtonsAndColor;
- (BOOL)shouldShowOptionButtons;
- (void)p_setupOptionButtonsIfNeededWithModel:(id)a0;
- (BOOL)enableShowSimilarEmoticon;
- (id)enterMethodForAddConfirm;
- (id)initWithContainerViewType:(long long)a0;
- (void)setPlaceHolderBGImage:(id)a0;
- (void)didTapAddToCustomButton:(id)a0;
- (void)didTapDeleteDoubleCheck:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end

@class UIView, UILongPressGestureRecognizer, AWEUserListGeneralCellAvatarView, AWEPageContext, NSString, UIImageView, AWEUserListGeneralCellMoreActionView, UILayoutGuide, AWEUserListGeneralCellRelationButton, AWEUserListGeneralCellTitleView;
@protocol AWEUserListGeneralCellCustomContentViewProtocol, AWEUserListGeneralCellConfigProtocol, AWEUserListGeneralCellCustomBottomViewProtocol;

@interface AWEUserListGeneralCellView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) id<AWEUserListGeneralCellConfigProtocol> config;
@property (retain, nonatomic) AWEPageContext *cellContext;
@property (retain, nonatomic) UIView *lightInteractionActionContainerView;
@property (retain, nonatomic) AWEUserListGeneralCellAvatarView *avatarView;
@property (retain, nonatomic) AWEUserListGeneralCellTitleView *titleView;
@property (retain, nonatomic) AWEUserListGeneralCellRelationButton *relationButton;
@property (retain, nonatomic) AWEUserListGeneralCellMoreActionView *moreActionView;
@property (retain, nonatomic) UIView<AWEUserListGeneralCellCustomBottomViewProtocol> *customBottomView;
@property (retain, nonatomic) UIView<AWEUserListGeneralCellCustomContentViewProtocol> *customContentView;
@property (retain, nonatomic) UIView *redDot;
@property (retain, nonatomic) UIView *checkBoxView;
@property (retain, nonatomic) UIImageView *checkBoxImageView;
@property (retain, nonatomic) UIView *disclosureIndicatorView;
@property (retain, nonatomic) UIImageView *arrowIconView;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGes;
@property (retain, nonatomic) UIView *bottomLineView;
@property (retain, nonatomic) UILayoutGuide *titleContentLayoutGuide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupWithConfig:(id)a0;
- (BOOL)trackColorRingShow;
- (void)didEndDisplayingCell;
- (id)autoSizeConfig;
- (id)customContentConfig;
- (void)updateContentBackGroundColor;
- (void)updateCheckBox;
- (void)updateWithCurrentConfig;
- (void)calculateCellLayout:(id)a0;
- (void)highlightWithColor:(id)a0 completion:(id /* block */)a1;
- (void)didBindToColorRingView;
- (void)longPressAction:(id)a0;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)prepareForReuse;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupUI;
- (void)willDisplay;

@end

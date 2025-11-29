@class DUXBadge, UITapGestureRecognizer, AWELeftSideBarListCellDataModel, NSString, DUXBaseImageView, UIView, UILabel;
@protocol AWELeftSideBarItemContext;

@interface AWELeftSideBarTopRightLayoutView : UIView <AWELeftSideBarStencilViewProtocol>

@property (retain, nonatomic) id<AWELeftSideBarItemContext> context;
@property (retain, nonatomic) AWELeftSideBarListCellDataModel *cellDataModel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) DUXBaseImageView *imageView;
@property (retain, nonatomic) UILabel *label;
@property (nonatomic) long long themeStyle;
@property (copy, nonatomic) id /* block */ clickContainerBlock;
@property (retain, nonatomic) DUXBadge *dotBadge;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)horizontalCellPadding;
+ (double)imageViewSize;
+ (double)horizontalMargin;

- (void)leftSideBarThemeDidChange:(long long)a0;
- (void)setClickBlock:(id /* block */)a0;
- (id)leftSideBarDisplayingSubtitle;
- (BOOL)leftSideBarRedDotIsShow;
- (void)reloadStencilViewUI;
- (long long)leftSideBarRedDotStyle;
- (void)showLeftSideBarRedDot;
- (void)hideLeftSideBarRedDot;
- (void)updateListCellContext:(id)a0 cellDataModel:(id)a1;
- (void)updateLeftSideBarSubTitle:(id)a0;
- (BOOL)leftSideBarSubTitleIsShow;
- (double)leftSideBarStencilViewWidth;
- (double)leftSideBarStencilViewHeight;
- (void)p_addTapGesture;
- (void)p_actionClick;
- (id)initWithContext:(id)a0 cellDataModel:(id)a1;
- (void)p_removeTapGesture;
- (void)setUpIconViewImageWithUrl:(id)a0 themeStyle:(long long)a1;
- (void)p_resetUI;
- (void)p_layoutDotBadge;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end

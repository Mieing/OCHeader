@class DUXBadge, UITapGestureRecognizer, AWELeftSideBarListCellDataModel, NSString, DUXBaseImageView, UIView, DUXBaseLabel;
@protocol AWELeftSideBarItemContext;

@interface AWELeftSideBarTopIconHorizontalView : UIView <AWELeftSideBarStencilViewProtocol>

@property (retain, nonatomic) id<AWELeftSideBarItemContext> context;
@property (retain, nonatomic) AWELeftSideBarListCellDataModel *cellDataModel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) DUXBaseImageView *imageView;
@property (retain, nonatomic) DUXBaseLabel *label;
@property (nonatomic) long long themeStyle;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (retain, nonatomic) DUXBadge *dotBadge;
@property (retain, nonatomic) DUXBadge *numberBadge;
@property (retain, nonatomic) DUXBadge *textBadge;
@property (nonatomic) long long redDotStyle;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)leftSideBarThemeDidChange:(long long)a0;
- (id)leftSideBarDisplayingSubtitle;
- (BOOL)leftSideBarRedDotIsShow;
- (void)reloadStencilViewUI;
- (void)updateLeftSideBarUnreadCount:(unsigned long long)a0;
- (void)updateLeftSideBarUnreadCount:(unsigned long long)a0 withMaxCount:(unsigned long long)a1;
- (long long)leftSideBarRedDotStyle;
- (void)updateLeftSideBarUnreadText:(id)a0;
- (void)showLeftSideBarRedDot;
- (void)hideLeftSideBarRedDot;
- (void)updateListCellContext:(id)a0 cellDataModel:(id)a1;
- (void)updateLeftSideBarSubTitle:(id)a0;
- (BOOL)leftSideBarSubTitleIsShow;
- (double)leftSideBarStencilViewHeight;
- (void)p_addTapGesture;
- (void)p_actionClick;
- (id)initWithContext:(id)a0 cellDataModel:(id)a1;
- (void)p_removeTapGesture;
- (void)setUpIconViewImageWithUrl:(id)a0 themeStyle:(long long)a1;
- (void)p_updateRedDotStatus;
- (void)p_updateLeftSideBarUnreadTextDowngrade:(BOOL)a0;
- (void)p_setupUI;
- (void).cxx_destruct;

@end

@class NSString, AWELeftSideBarListCellDataModel, UILabel, DUXBaseImageView, DUXBadge;
@protocol AWELeftSideBarItemContext;

@interface AWELeftSideBarVerticalListView : UIView <AWELeftSideBarStencilViewProtocol>

@property (retain, nonatomic) id<AWELeftSideBarItemContext> context;
@property (retain, nonatomic) AWELeftSideBarListCellDataModel *cellDataModel;
@property (retain, nonatomic) DUXBaseImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) DUXBadge *redDotView;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) DUXBadge *unreadCountView;
@property (retain, nonatomic) DUXBaseImageView *arrowView;
@property (nonatomic) long long themeStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWELeftSideBarCommonAdapterClass;

- (void)leftSideBarThemeDidChange:(long long)a0;
- (BOOL)enableBigFontMode;
- (id)leftSideBarDisplayingSubtitle;
- (BOOL)leftSideBarRedDotIsShow;
- (void)reloadStencilViewUI;
- (void)updateLeftSideBarUnreadCount:(unsigned long long)a0;
- (void)updateLeftSideBarUnreadCount:(unsigned long long)a0 withMaxCount:(unsigned long long)a1;
- (long long)leftSideBarRedDotStyle;
- (void)showLeftSideBarRedDot;
- (void)hideLeftSideBarRedDot;
- (void)updateListCellContext:(id)a0 cellDataModel:(id)a1;
- (void)updateLeftSideBarSubTitle:(id)a0;
- (BOOL)leftSideBarSubTitleIsShow;
- (double)leftSideBarStencilViewHeight;
- (id)aAWELeftSideBarCommonAdapter;
- (id)initWithContext:(id)a0 cellDataModel:(id)a1;
- (void)setUpIconViewImageWithUrl:(id)a0 themeStyle:(long long)a1;
- (void)handleViewShow:(long long)a0;
- (double)widthForLabelStr:(id)a0;
- (double)getListMaxWidthSetting;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;

@end

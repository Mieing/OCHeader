@class DUXBadge, UITapGestureRecognizer, AWELeftSideBarListCellDataModel, NSString, UILabel, DUXBaseImageView, DUXTextTag;
@protocol AWELeftSideBarItemContext;

@interface AWELeftSideBarGridListView : UIView <AWELeftSideBarStencilViewProtocol, AWESideBarPopViewTargetPointProtocol>

@property (retain, nonatomic) id<AWELeftSideBarItemContext> context;
@property (retain, nonatomic) AWELeftSideBarListCellDataModel *cellDataModel;
@property (retain, nonatomic) DUXBaseImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) DUXTextTag *subtitleLabel;
@property (retain, nonatomic) DUXBadge *redDotView;
@property (retain, nonatomic) DUXBadge *unreadCountView;
@property (nonatomic) long long themeStyle;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWELeftSideBarCommonAdapterClass;
+ (double)iconLen;
+ (double)paddingY;
+ (double)iconTitleGapY;
+ (id)p_createSubtitleLabel;
+ (BOOL)p_canShowSubtitleLabel;

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
- (void)p_addTapGesture;
- (void)p_actionClick;
- (struct CGPoint { double x0; double x1; })popViewTargetPoint;
- (id)p_createTitleLabel;
- (id)initWithContext:(id)a0 cellDataModel:(id)a1;
- (void)p_removeTapGesture;
- (void)p_loadSubtitleLabelIfNeeded;
- (void)setUpIconViewImageWithUrl:(id)a0 themeStyle:(long long)a1;
- (void)handleViewShow:(long long)a0;
- (id)p_titleLabelFont;
- (double)getGridMaxWidthSetting;
- (void).cxx_destruct;
- (void)setupUI;

@end

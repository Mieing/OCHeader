@class AWEUserListGeneralCellRelationButton, AWEUserListGeneralCellAvatarView, AWEUserListGeneralCellTitleView, AWEPageContext;
@protocol AWEUserListGeneralCellConfigProtocol;

@interface AFDRecommendPanelUserListCellView : UIView

@property (retain, nonatomic) AWEPageContext *cellContext;
@property (retain, nonatomic) id<AWEUserListGeneralCellConfigProtocol> config;
@property (retain, nonatomic) AWEUserListGeneralCellAvatarView *avatarView;
@property (retain, nonatomic) AWEUserListGeneralCellTitleView *titleView;
@property (retain, nonatomic) AWEUserListGeneralCellRelationButton *relationButton;

+ (double)contentHeightWithConfig:(id)a0;
+ (BOOL)shouldShowRelationBtnWithConfig:(id)a0;
+ (double)titleViewWidthWithConfig:(id)a0;
+ (double)titleHeightWithConfig:(id)a0 maxWidth:(double)a1;

- (void)setupWithConfig:(id)a0;
- (void)updateContentBackGroundColor;
- (void)updateWithCurrentConfig;
- (void)highlightWithColor:(id)a0 completion:(id /* block */)a1;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addObserver;
- (void)dealloc;
- (void)setupUI;

@end

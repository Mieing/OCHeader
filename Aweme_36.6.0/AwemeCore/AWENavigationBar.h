@class NSString, AWECommonSearchBar, UILabel, UIView;

@interface AWENavigationBar : UIView <IESIMNavigationBarProtocol>

@property (retain, nonatomic) UIView *bottomLineView;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *subTitleLabel;
@property (readonly, nonatomic) UIView *titleView;
@property (readonly, nonatomic) UIView *leftBtnsContainerView;
@property (readonly, nonatomic) UIView *rightBtnsContainerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long searchBarPosition;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *leftBtnsContainerView;
@property (retain, nonatomic) UIView *rightBtnsContainerView;
@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) AWECommonSearchBar *searchBar;
@property (retain, nonatomic) UIView *bottomLineView;
@property (nonatomic) unsigned long long searchBarType;
@property (nonatomic) BOOL shouldTouchPenetrate;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } titleEdgeInsets;

+ (void)aweui_setFixNavBarTopConstraint:(BOOL)a0;

- (id)deepFindChatListControllerIn:(id)a0;
- (id)findViewController;
- (void)handleLongPressGesture:(id)a0;
- (void)handleDoubleTapGesture:(id)a0;
- (void)layoutSubviews;
- (void)addRightNaviBarBtnView:(id)a0;
- (void)addLeftNaviBarBtnView:(id)a0;
- (void)addSubviews;
- (void)p_updateTitleViewConstrains;
- (void)p_updateTitleSearchBarConstrains;
- (void)addTitleSearchBar;
- (void)addBottomSearchBar;
- (void)addSearchBarWithPosition:(unsigned long long)a0;
- (void)adjustConstrainForTowTitle;
- (void)addTitleView:(id)a0;
- (void).cxx_destruct;
- (void)didAddSubview:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end

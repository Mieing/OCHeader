@class UILabel, NSString, WCPayCss, UIView, MMUIButton, UIButton;

@interface MMPanelView : WCPayNavigationView

@property (retain) MMUIButton *leftBarButton;
@property (retain) UIButton *rightBarButton;
@property (retain) UIView *containerView;
@property (retain) UIView *headerView;
@property (retain) UIView *customContainerView;
@property (retain) UIView *footerView;
@property (retain) UIButton *leftButton;
@property (retain) UIView *bottomButtonInternalView;
@property (retain) UIButton *rightButton;
@property (retain) UIView *customView;
@property double customViewHeight;
@property (retain) NSString *leftTitle;
@property (retain) NSString *rightTitle;
@property (copy) id /* block */ leftHandler;
@property (copy) id /* block */ rightHandler;
@property (copy) id /* block */ leftBarHandler;
@property (copy) id /* block */ rightBarHandler;
@property unsigned long long leftBarStyle;
@property unsigned long long rightBarStyle;
@property (retain) NSString *title;
@property (retain) NSString *subTitle;
@property long long titleAlignment;
@property (retain) UILabel *titleMainLabel;
@property (retain) UILabel *titleDescLabel;
@property (nonatomic) double navigationY;
@property (retain) WCPayCss *css;

+ (id)ShowPanelWithCustomView:(id)a0 customViewHeight:(double)a1 leftTitle:(id)a2 leftHandler:(id /* block */)a3 rightTitle:(id)a4 rightHandler:(id /* block */)a5 leftBarStyle:(unsigned long long)a6 leftBarHandler:(id /* block */)a7 rightBarStyle:(unsigned long long)a8 rightBarHandler:(id /* block */)a9 title:(id)a10 subTitle:(id)a11 titleAlignment:(long long)a12 complete:(id /* block */)a13;
+ (id)ShowPanelWithCustomView:(id)a0 customViewHeight:(double)a1 leftTitle:(id)a2 leftHandler:(id /* block */)a3 rightTitle:(id)a4 rightHandler:(id /* block */)a5 leftBarStyle:(unsigned long long)a6 leftBarHandler:(id /* block */)a7 rightBarStyle:(unsigned long long)a8 rightBarHandler:(id /* block */)a9 title:(id)a10 subTitle:(id)a11 titleAlignment:(long long)a12 complete:(id /* block */)a13 lightMode:(BOOL)a14;

- (void)layoutSubviews;
- (void)updateView;
- (void)updateTitles;
- (void)updateTitleMain;
- (void)updateTitleDesc;
- (void)adjustTitle;
- (void)updateBarButton;
- (void)updateLeftBarButton;
- (void)updateRightBarButton;
- (void)updateHeaderView;
- (void)updateCustomContainerView;
- (void)updateFooterView;
- (void)updateLeftButton;
- (void)updateBottomButtonInternal;
- (void)updaterightButton;
- (void)onClickLeftButton;
- (void)onClickRightButton;
- (void)onClickRightBarButton;
- (void)onSpaceTap;
- (void)onClickLeftBarButton;
- (void)clearAllHandler;
- (void)hide:(id /* block */)a0;
- (void).cxx_destruct;

@end

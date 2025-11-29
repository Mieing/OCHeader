@class NSString, IESECShopForwardView, UIView, UIButton;
@protocol IESECRelationNavbarViewDelegate;

@interface IESECShopAbnormalNavbarView : UIView <IESECRelationNavbarViewProtocol> {
    UIView *_recommendTitleView;
}

@property (retain, nonatomic) IESECShopForwardView *containerView;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIButton *moreButton;
@property (weak, nonatomic) id<IESECRelationNavbarViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didTapBackButton;
- (void)showShareIcon;
- (void)p_updateViewWithTintColor:(id)a0;
- (void)handleHeaderScrollPercent:(double)a0 withHeaderView:(id)a1;
- (void)scrollToPercent:(double)a0;
- (void)setStartStateColor:(id)a0 endStateColor:(id)a1;
- (void)setSearchEntranceHidden:(BOOL)a0;
- (void)setBackButtonWithCloseStyle:(BOOL)a0;
- (void)addHeaderView:(id)a0 sevenScreen:(BOOL)a1;
- (void)showHeaderView:(BOOL)a0;
- (void)updateHeaderView:(id)a0 viewSize:(struct CGSize { double x0; double x1; })a1;
- (void)addRecommendTitleView:(id)a0;
- (void)showRecommendTitleView:(BOOL)a0;
- (void)showDotsView;
- (void)doShareAnimation:(long long)a0;
- (void)setEntranceCouponInfo:(id)a0;
- (void)showCouponAnimation:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupViews;

@end

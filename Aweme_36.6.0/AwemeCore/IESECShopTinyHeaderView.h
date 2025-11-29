@class UIView, NSString, IESECStorePageContext, UIImageView, NSDictionary, IESECShopTinyHeaderViewModel, IESECShopScrollTextView, IESECServiceProxy, UILabel;
@protocol IESECShopTagListView, IESECShopFollowView, IESECShopLayoutService, IESECShopHeaderViewDelegate, IESECStoreContainerProtocol, IESECShopPageContextV2, IESECShopEventService, IESECShopFollowService;

@interface IESECShopTinyHeaderView : IESECShopForwardView <IESECShopMultipleFunctionsFollowViewDelegate, IESECShopEventSubscriber, IESECShopHeaderViewProtocol> {
    unsigned long long _state;
    IESECStorePageContext *_pageContext;
    id<IESECShopPageContextV2> _shopContextV2;
}

@property (retain, nonatomic) IESECShopTinyHeaderViewModel *viewModel;
@property (retain, nonatomic) IESECServiceProxy<IESECShopLayoutService> *layoutService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopFollowService> *followService;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *infoContainer;
@property (retain, nonatomic) UIImageView *logoImageView;
@property (retain, nonatomic) IESECShopScrollTextView *nameView;
@property (retain, nonatomic) UIView<IESECShopTagListView> *tagListView;
@property (retain, nonatomic) UIView<IESECShopFollowView> *followView;
@property (retain, nonatomic) UILabel *translatingLabel;
@property (retain, nonatomic) UIImageView *translatingImageView;
@property (retain, nonatomic) NSDictionary *translatingViewsDict;
@property (retain, nonatomic) IESECServiceProxy<IESECShopEventService> *eventService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESECStoreContainerProtocol> container;
@property (weak, nonatomic) id<IESECShopHeaderViewDelegate> delegate;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (readonly, nonatomic) double headerViewHeight;

- (void)follow;
- (long long)fansClubLevel;
- (void)unfollow;
- (void)jumpToJoinFansClubBoard;
- (void)jumpToFansClubMissionBoard;
- (void)setUpBinding;
- (void)iesecshop_sliceXController:(id)a0 didFinishLoad:(BOOL)a1;
- (void)scrollToPercent:(double)a0;
- (void)updateFansClubLevel:(long long)a0;
- (id)translateViewsDict;
- (void)translateFromHeaderView:(id)a0 percent:(double)a1;
- (void)updateHeaderViewWithInfoResponse:(id)a0;
- (void)updateHeaderViewWithStyle:(unsigned long long)a0;
- (void)displaySimpleMode:(BOOL)a0;
- (void)updateWithHeaderPercent:(double)a0;
- (id)from2translateFunc:(id)a0 withTranslationContext:(id)a1;
- (void)translate2TargetFunc:(id)a0 targetViews:(id)a1 withTranslationContext:(id)a2;
- (void)handleTranslateView:(id)a0 topView:(id)a1 bottomView:(id)a2 percent:(double)a3 viewType:(unsigned long long)a4;
- (void)hideHeaderProfileViewIfNeeded;
- (void)updateFollowViewMode;
- (void)transferToStoreOwnerProfilePage;
- (void)transferToStoreDetailPage;
- (id)initWithPageContext:(id)a0 shopContext:(id)a1;
- (void).cxx_destruct;
- (id)translationContext;
- (void)setUpView;

@end

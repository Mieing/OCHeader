@class WCFinderMemberShipPreviewListViewModel, WCFinderFeedFlowView, WCFinderContact, NSString, UIImageView, UIButton, WCFinderAuthInfoIconView, WCFinderHeadImageView, MMUILabel, UILabel;
@protocol WCFinderMemberShipPaymentGuideTableViewCellDelegate;

@interface WCFinderMemberShipPaymentGuideTableViewCell : MMTableViewCell <WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewDelegate, WCFinderMemberShipPreviewListViewModelDelegate>

@property (retain, nonatomic) WCFinderContact *contact;
@property (retain, nonatomic) WCFinderHeadImageView *headImageView;
@property (retain, nonatomic) MMUILabel *nameLabel;
@property (retain, nonatomic) MMUILabel *tipsLabel;
@property (retain, nonatomic) WCFinderFeedFlowView *feedFlowView;
@property (retain, nonatomic) WCFinderMemberShipPreviewListViewModel *viewModel;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIImageView *priceCoinIcon;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UILabel *cycleLabel;
@property (retain, nonatomic) UILabel *moreLabel;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authIconView;
@property (weak, nonatomic) id<WCFinderMemberShipPaymentGuideTableViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeightWithIsSubScene:(BOOL)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupSubviews;
- (void)layoutHeadImageView;
- (void)layoutNameLabel;
- (void)layoutAuthIconView;
- (void)layoutTipsLabel;
- (void)layoutConfirmButton;
- (void)layoutPriceCoinIcon;
- (void)layoutPriceLabel;
- (void)layoutCycleLabel;
- (void)layoutMoreLabel;
- (void)layoutFeedFlowView;
- (void)setLineSpace:(double)a0 withText:(id)a1 inLabel:(id)a2;
- (void)updateContact:(id)a0 memberPrice:(unsigned long long)a1 otherVideoNum:(unsigned long long)a2 otherLiveNum:(unsigned long long)a3 viewModel:(id)a4;
- (void)onConfirm;
- (void)layoutSubviews;
- (long long)finderFeedFlowView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)finderFeedFlowView:(id)a0 contentVMAtIndexPath:(id)a1;
- (id)finderFeedFlowView:(id)a0 cellConfigAtIndexPath:(id)a1;
- (id)finderFeedFlowViewCurrentViewController:(id)a0;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)a0;
- (BOOL)finderFeedFlowViewCanPrefetchData:(id)a0;
- (void)finderFeedFlowView:(id)a0 requestDataWithType:(unsigned long long)a1;
- (unsigned long long)finderFeedFlowViewState:(id)a0;
- (id)finderFeedFlowView:(id)a0 tipsType:(unsigned long long)a1 inState:(unsigned long long)a2;
- (void)finderFeedFlowView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)finderMemberShipPreviewListViewNoMoreData;
- (void)finderMemberShipPreviewListViewFetchListSuc;
- (void)finderMemberShipPreviewListViewFetchListFail;
- (void).cxx_destruct;

@end

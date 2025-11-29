@class UIView, IESECObservationManager, NSIndexPath, IESECLivePromotionCardConfigModel, NSString, IESECLiveGoodsListItemViewModel, IESECLiveGoodsListIntroducingCard, UILabel, IESECLiveContext;
@protocol IESECLivePromotionCardViewProtocol, IESECLivePromotionCardBusinessDelegate, IESECLiveGoodsListViewCellDelegate, IESECLivePromotionCardBusinessParamsDelegate, IESECLiveHidableHeaderComponentDelegate;

@interface IESECLiveGoodsListIntroduceBannerWrapperView : UIView <IESECLiveHidableHeaderComponentProtocol>

@property (retain, nonatomic) IESECLiveGoodsListItemViewModel *item;
@property (nonatomic) BOOL isWaitingForExplain;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIView<IESECLivePromotionCardViewProtocol> *promotionCardView;
@property (retain, nonatomic) IESECObservationManager *viewModelObservationManager;
@property (retain, nonatomic) IESECLivePromotionCardConfigModel *cardConfigModel;
@property (nonatomic) BOOL shown;
@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (nonatomic) long long viewStyle;
@property (weak, nonatomic) id<IESECLiveGoodsListViewCellDelegate> delegate;
@property (retain, nonatomic) IESECLiveGoodsListIntroducingCard *promotionCard;
@property (weak, nonatomic) id<IESECLivePromotionCardBusinessDelegate> cardDelegate;
@property (weak, nonatomic) id<IESECLivePromotionCardBusinessParamsDelegate> bizParamsDelegate;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (readonly) UIView *view;
@property (weak, nonatomic) id<IESECLiveHidableHeaderComponentDelegate> hidableHeaderComponentDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setShown:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)setupWithItem:(id)a0 refreshType:(long long)a1;
- (void)setupCardViewWithLiveContext:(id)a0 configModel:(id)a1 cardDelegate:(id)a2 bizParamsDelegate:(id)a3;
- (void)showEventIfNeededAtTabIndex:(long long)a0;
- (id)currentActionTrackModuleInfo;
- (id)getCardConfigModel;
- (void)updateWithItem:(id)a0 refreshType:(long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end

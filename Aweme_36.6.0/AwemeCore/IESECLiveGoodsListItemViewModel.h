@class IESECLiveGoodsViewModelContainerContext, IESECLiveContext, NSDictionary, IESECLiveGoodsBaseModel, IESECLiveDynamicRegionModel, IESECLigoContext, IESECLiveGoodsViewModel;

@interface IESECLiveGoodsListItemViewModel : NSObject <IGListDiffable>

@property (nonatomic) BOOL needsUpdate;
@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (retain, nonatomic) IESECLigoContext *ligoContext;
@property (retain, nonatomic) IESECLiveGoodsViewModelContainerContext *containerContext;
@property (readonly, nonatomic) NSDictionary *trackBasicParams;
@property (weak, nonatomic) id uiPage;
@property (readonly, nonatomic) IESECLiveGoodsBaseModel *goodsModel;
@property (retain, nonatomic) IESECLiveGoodsViewModel *goodsViewModel;
@property (retain, nonatomic) IESECLiveDynamicRegionModel *promotionBottom;
@property (nonatomic) BOOL showLowPriceModule;
@property (retain, nonatomic) IESECLiveDynamicRegionModel *promotionBottomDynamicSlotModel;

+ (double)cellHeightForGoodsViewModel:(id)a0 businessType:(long long)a1;
+ (double)cellHeaderOpenRegionHeightWithURL:(id)a0;
+ (double)cellDynamicRegionHeightWithURL:(id)a0;
+ (double)getCellBottomRegionHeightWithURL:(id)a0 goodsModel:(id)a1;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (id)p_basicTrackParams;
- (id)initWithLiveContext:(id)a0;
- (double)cellHeaderHeight;
- (void)trackEvent:(id)a0 params:(id)a1 withBcm:(BOOL)a2;
- (void)trackClickWithParams:(id)a0 extraInfo:(id)a1 itemView:(id)a2 index:(id)a3 btmModel:(id)a4;
- (void)setNeedsUpdate;
- (void).cxx_destruct;
- (void)reload;
- (void)updateIfNeeded;
- (double)cellHeight;

@end

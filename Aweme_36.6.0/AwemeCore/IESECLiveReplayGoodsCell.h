@class IESECLivePromotionCard, IESECLiveReplayGoodsListContext, NSString;
@protocol IESECLiveReplayGoodsCellDelegate, IESECLivePromotionCardBusinessParamsDelegate, IESECLivePromotionCardBusinessDelegate;

@interface IESECLiveReplayGoodsCell : UICollectionViewCell <IESECLivePromotionCardBusinessDelegate, IGListBindable>

@property (retain, nonatomic) IESECLivePromotionCard *promotionCard;
@property (weak, nonatomic) IESECLiveReplayGoodsListContext *context;
@property (weak, nonatomic) id<IESECLiveReplayGoodsCellDelegate, IESECLivePromotionCardBusinessParamsDelegate, IESECLivePromotionCardBusinessDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeForModel:(id)a0;

- (void)bindViewModel:(id)a0;
- (id)promotionCardView;
- (id)getCardConfigModel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end

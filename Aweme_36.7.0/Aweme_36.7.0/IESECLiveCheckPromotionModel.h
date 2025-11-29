@class IESECLiveUltimateBuyModel, NSString, IESECLiveActionModel, IESECLiveAddCartParam, IESECLiveGoodsJumpDestination, IESECLiveEditCartParam;

@interface IESECLiveCheckPromotionModel : IESECLiveApiBaseModel

@property (copy, nonatomic) NSString *orderUrl;
@property (retain, nonatomic) IESECLiveGoodsJumpDestination *jumpDestination;
@property (retain, nonatomic) IESECLiveActionModel *checkAction;
@property (retain, nonatomic) IESECLiveAddCartParam *addCartParam;
@property (retain, nonatomic) IESECLiveEditCartParam *editCartParam;
@property (retain, nonatomic) IESECLiveUltimateBuyModel *ultimateBuyModel;
@property (retain, nonatomic) IESECLiveActionModel *diffAction;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

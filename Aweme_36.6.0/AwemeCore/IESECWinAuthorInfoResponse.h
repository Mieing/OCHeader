@class IESECWinAuthorInfo, IESECRelationShoppingCartInfoModel;

@interface IESECWinAuthorInfoResponse : IESECBaseApiModel

@property (retain, nonatomic) IESECWinAuthorInfo *authorInfo;
@property (retain, nonatomic) IESECRelationShoppingCartInfoModel *shoppingCartInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

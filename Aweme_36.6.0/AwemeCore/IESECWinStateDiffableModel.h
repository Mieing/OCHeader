@class NSString, NSValue, IESECWinProductsTextConfigurationModel;

@interface IESECWinStateDiffableModel : NSObject <IGListDiffable>

@property (nonatomic) long long goodsCount;
@property (copy, nonatomic) NSString *bindShopName;
@property (nonatomic) long long selectedGoodsType;
@property (copy, nonatomic) NSString *emptyText;
@property (copy, nonatomic) NSString *emptyDetailText;
@property (nonatomic) BOOL isStore;
@property (nonatomic) BOOL productShopEntry;
@property (nonatomic) BOOL recommendRequesting;
@property (nonatomic) BOOL isShowRecommend;
@property (nonatomic) long long shopProductCount;
@property (copy, nonatomic) NSString *shopURL;
@property (retain, nonatomic) IESECWinProductsTextConfigurationModel *textConfigModel;
@property (retain, nonatomic) NSValue *localImageSize;
@property (retain, nonatomic) NSString *localImageName;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (void).cxx_destruct;

@end

@class NSString, AWEURLModel;

@interface AWEDoubleColumnSearchMerchandiseExtraInfoMapModel : AWEBaseApiModel

@property (nonatomic) long long isShopSearch;
@property (nonatomic) long long productRank;
@property (copy, nonatomic) NSString *fromAlgorithm;
@property (nonatomic) BOOL enhancedDisplay;
@property (retain, nonatomic) AWEURLModel *statusIconURL;
@property (retain, nonatomic) NSString *sellOutTip;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

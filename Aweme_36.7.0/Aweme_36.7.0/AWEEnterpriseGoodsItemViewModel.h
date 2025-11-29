@class NSString, AWEEnterpriseIMMessageGoodsItemModel;

@interface AWEEnterpriseGoodsItemViewModel : NSObject

@property (retain, nonatomic) AWEEnterpriseIMMessageGoodsItemModel *detailData;
@property (nonatomic) BOOL hasSubTitle;
@property (copy, nonatomic) NSString *mainTitle;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *priceString;
@property (copy, nonatomic) NSString *avatarUrl;

- (id)convertPrice:(id)a0;
- (void)configWithData:(id)a0;
- (void).cxx_destruct;

@end

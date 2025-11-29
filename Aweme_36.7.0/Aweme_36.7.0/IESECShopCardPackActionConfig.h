@class NSString, NSDictionary, IESECShopCardPackProductModel, UIView;

@interface IESECShopCardPackActionConfig : NSObject

@property (retain, nonatomic) IESECShopCardPackProductModel *product;
@property (retain, nonatomic) UIView *cell;
@property (nonatomic) long long index;
@property (retain, nonatomic) NSString *btmInfo;
@property (retain, nonatomic) NSString *detailURL;
@property (retain, nonatomic) NSString *tabNameSecond;
@property (copy, nonatomic) NSDictionary *additionalParams;

- (void).cxx_destruct;

@end

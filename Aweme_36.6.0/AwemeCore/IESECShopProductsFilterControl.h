@class NSString, NSNumber, IESECShopTagListModel;

@interface IESECShopProductsFilterControl : NSObject

@property (copy, nonatomic) NSString *selectParams;
@property (copy, nonatomic) NSString *remainSelectParams;
@property (nonatomic) unsigned long long order;
@property (nonatomic) long long sortType;
@property (copy, nonatomic) NSNumber *selectedPickType;
@property (retain, nonatomic) IESECShopTagListModel *tagList;
@property (nonatomic) double clickTime;

- (void).cxx_destruct;

@end

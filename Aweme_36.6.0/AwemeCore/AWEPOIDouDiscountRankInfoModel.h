@class NSString, AWEURLModel;

@interface AWEPOIDouDiscountRankInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *rankCode;
@property (copy, nonatomic) NSString *rankName;
@property (retain, nonatomic) AWEURLModel *categoryIcon;
@property (copy, nonatomic) NSString *categoryName;
@property (nonatomic) long long itemCount;
@property (nonatomic) long long vvTotal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

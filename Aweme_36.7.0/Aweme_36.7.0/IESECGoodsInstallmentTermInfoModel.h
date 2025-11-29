@class NSArray, NSString;

@interface IESECGoodsInstallmentTermInfoModel : IESECBaseApiModel

@property (nonatomic) BOOL shouldShow;
@property (retain, nonatomic) NSArray *installmentItems;
@property (copy, nonatomic) NSString *installmentTitle;
@property (nonatomic) BOOL shouldSelectable;
@property (copy, nonatomic) NSString *selectionTip;
@property (copy, nonatomic) NSString *creditTip;
@property (nonatomic) long long anchorID;
@property (copy, nonatomic) NSString *planNo;
@property (copy, nonatomic) NSString *resourceNo;
@property (copy, nonatomic) NSString *materialNo;
@property (copy, nonatomic) NSString *bizType;

+ (id)installmentItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

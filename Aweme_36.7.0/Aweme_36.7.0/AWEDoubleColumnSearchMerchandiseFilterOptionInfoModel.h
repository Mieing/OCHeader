@class NSString, NSArray;

@interface AWEDoubleColumnSearchMerchandiseFilterOptionInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *option;
@property (copy, nonatomic) NSString *optionID;
@property (copy, nonatomic) NSString *optionType;
@property (copy, nonatomic) NSArray *optionWordList;

+ (id)optionWordListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

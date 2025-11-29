@class NSString, NSArray;

@interface AWEWebcastCodeGenProductPriceModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *amount;
@property (copy, nonatomic) NSString *currency;
@property (nonatomic) long long pos;
@property (copy, nonatomic) NSArray *payTypeArray;
@property (copy, nonatomic) NSString *fullPrice;
@property (nonatomic) long long countdownTimestamp;
@property (copy, nonatomic) NSString *start;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

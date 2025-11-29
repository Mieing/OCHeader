@class NSString, NSArray;

@interface AWELivePriceInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *currency;
@property (nonatomic) unsigned long long pos;
@property (copy, nonatomic) NSString *amount;
@property (copy, nonatomic) NSArray *payType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

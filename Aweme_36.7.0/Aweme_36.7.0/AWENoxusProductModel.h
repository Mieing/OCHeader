@class NSString;

@interface AWENoxusProductModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long price;
@property (nonatomic) long long appID;
@property (nonatomic) unsigned long long type;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

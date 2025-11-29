@class NSString;

@interface AWESearchSmartPreloadBillModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *spuID;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *targetPage;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

@class NSString;

@interface AWESearchSmartPreloadSpuModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *spuID;
@property (copy, nonatomic) NSString *targetPage;
@property (copy, nonatomic) NSString *schema;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

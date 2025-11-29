@class NSString;

@interface AWECodeGenPurchaseModel : AWEBaseDataModel

@property (nonatomic) long long rightStatus;
@property (copy, nonatomic) NSString *purchaseSchema;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

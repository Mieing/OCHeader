@class NSString;

@interface AWERedPackToastDataModel : AWEBaseApiModel

@property (nonatomic) long long amountNum;
@property (copy, nonatomic) NSString *text;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

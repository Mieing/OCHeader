@class NSString;

@interface AWESearchCommonAbstractTabModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *tabType;
@property (copy, nonatomic) NSString *content;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

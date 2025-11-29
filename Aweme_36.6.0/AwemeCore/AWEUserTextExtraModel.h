@class NSNumber, NSString;

@interface AWEUserTextExtraModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *start;
@property (retain, nonatomic) NSNumber *end;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *searchText;

+ (id)typeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

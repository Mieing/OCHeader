@class NSString;

@interface AWEHotSearchInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *sentence;
@property (copy, nonatomic) NSString *ailabExtra;
@property (copy, nonatomic) NSString *recExtra;
@property (copy, nonatomic) NSString *bizExtra;
@property (copy, nonatomic) NSString *logExtra;

+ (id)JSONKeyPathsByPropertyKey;

- (id)logExtraDictionary;
- (void).cxx_destruct;

@end

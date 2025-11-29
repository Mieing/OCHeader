@class NSString;

@interface AWEProfilePostWorkFilterModel : AWEBaseApiModel

@property (nonatomic) unsigned long long filterType;
@property (copy, nonatomic) NSString *filterName;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

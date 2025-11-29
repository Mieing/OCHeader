@class NSString, NSArray;

@interface AWEPLVFilterItem : AWEBaseApiModel

@property (retain, nonatomic) NSString *filterKey;
@property (retain, nonatomic) NSArray *filterValue;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

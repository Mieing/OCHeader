@class NSString, NSArray, NSMutableArray;

@interface AWESearchGroupBuyDataResponse : AWESearchResultLifeServiceBaseDataResponse

@property (copy, nonatomic) NSString *backtrace;
@property (copy, nonatomic) NSArray *leafModels;
@property (retain, nonatomic) NSMutableArray *cardArray;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

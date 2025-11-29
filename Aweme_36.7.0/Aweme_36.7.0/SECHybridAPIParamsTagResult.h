@class NSString, NSArray, NSDictionary;

@interface SECHybridAPIParamsTagResult : NSObject

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) id value;
@property (copy, nonatomic) NSArray *tags;
@property (copy, nonatomic) NSDictionary *detailTags;

- (void).cxx_destruct;

@end

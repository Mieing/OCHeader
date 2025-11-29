@class NSArray;

@interface IESECFeedResourceCardSearchModel : IESECFeedResourceCardBaseNode

@property (retain, nonatomic) NSArray *searchItems;

+ (id)searchItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

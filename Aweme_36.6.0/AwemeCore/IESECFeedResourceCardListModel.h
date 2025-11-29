@class NSArray;

@interface IESECFeedResourceCardListModel : IESECFeedResourceCardBaseNode

@property (copy, nonatomic) NSArray *elements;

+ (id)elementsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

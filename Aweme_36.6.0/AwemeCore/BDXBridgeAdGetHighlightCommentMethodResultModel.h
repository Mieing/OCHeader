@class NSArray;

@interface BDXBridgeAdGetHighlightCommentMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSArray *highlightCommentList;

+ (id)highlightCommentListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

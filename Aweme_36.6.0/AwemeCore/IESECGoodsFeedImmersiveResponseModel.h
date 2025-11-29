@class NSArray, IESECGoodsFeedImmersiveCursorModel;

@interface IESECGoodsFeedImmersiveResponseModel : IESECBaseApiModel

@property (copy, nonatomic) NSArray *feeds;
@property (copy, nonatomic) NSArray *anchorProducts;
@property (copy, nonatomic) IESECGoodsFeedImmersiveCursorModel *cursor;
@property (nonatomic) double dataClientInitTime;

+ (id)feedsJSONTransformer;
+ (id)cursorJSONTransformer;
+ (id)anchorProductsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end

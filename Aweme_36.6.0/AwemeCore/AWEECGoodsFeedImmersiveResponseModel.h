@class NSArray, AWEECGoodsFeedImmersiveCursorModel;

@interface AWEECGoodsFeedImmersiveResponseModel : IESECBaseApiModel

@property (copy, nonatomic) NSArray *feeds;
@property (copy, nonatomic) AWEECGoodsFeedImmersiveCursorModel *cursor;

+ (id)feedsJSONTransformer;
+ (id)cursorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

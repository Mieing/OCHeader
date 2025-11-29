@class NSString;

@interface AWECommentTipsModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *commentTipsText;

+ (id)commentTipsTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

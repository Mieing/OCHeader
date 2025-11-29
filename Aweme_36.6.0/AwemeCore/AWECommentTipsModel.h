@class NSString;

@interface AWECommentTipsModel : AWEBaseApiModel

@property (nonatomic) unsigned long long commentTipsType;
@property (copy, nonatomic) NSString *commentTipsText;

+ (id)commentTipsTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

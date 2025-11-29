@class AWEAwemeModel;

@interface AWECommentVideoReplyModel : AWEBaseApiModel

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;

+ (id)typeJSONTransformer;
+ (id)awemeModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

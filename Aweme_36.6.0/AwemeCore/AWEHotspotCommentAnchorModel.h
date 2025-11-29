@class NSNumber, NSString, AWEURLModel;

@interface AWEHotspotCommentAnchorModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *sentenceID;
@property (retain, nonatomic) AWEURLModel *iconURL;
@property (copy, nonatomic) NSString *sentence;
@property (copy, nonatomic) NSString *hint;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSString *dataSource;

+ (id)iconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

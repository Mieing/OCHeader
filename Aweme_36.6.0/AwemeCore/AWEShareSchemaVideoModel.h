@class NSString, AWEURLModel;

@interface AWEShareSchemaVideoModel : AWEBaseApiModel

@property (retain, nonatomic) AWEURLModel *coverURL;
@property (copy, nonatomic) NSString *authorName;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *awemeID;

+ (id)coverURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

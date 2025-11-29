@class NSNumber, NSString, AWEURLModel;

@interface AWESearchArticleModel : AWEBaseApiModel

@property (retain, nonatomic) AWEURLModel *imageURL;
@property (retain, nonatomic) NSNumber *readCounts;
@property (copy, nonatomic) NSString *articleTitle;
@property (copy, nonatomic) NSString *authorName;
@property (copy, nonatomic) NSString *sourceURL;
@property (copy, nonatomic) NSString *groupID;

+ (id)imageURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

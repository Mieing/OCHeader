@class NSNumber, NSString, AWEURLModel;

@interface AWEFavoriteTagInfoItem : AWEBaseApiModel

@property (copy, nonatomic) NSNumber *tagID;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWEURLModel *coverURL;
@property (retain, nonatomic) NSNumber *count;

+ (id)coverURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

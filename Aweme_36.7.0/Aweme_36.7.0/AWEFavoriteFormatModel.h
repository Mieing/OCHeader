@class NSString, AWEURLModel;

@interface AWEFavoriteFormatModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *seasonID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) AWEURLModel *coverURL;

+ (id)coverURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

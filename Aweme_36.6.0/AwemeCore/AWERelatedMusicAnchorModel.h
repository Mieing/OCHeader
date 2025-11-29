@class NSString, AWEURLModel;

@interface AWERelatedMusicAnchorModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *schemaURL;
@property (retain, nonatomic) AWEURLModel *imageURL;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSString *extraInfo;

+ (id)imageURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

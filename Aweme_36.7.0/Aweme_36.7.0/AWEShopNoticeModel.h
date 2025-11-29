@class NSString, AWEURLModel;

@interface AWEShopNoticeModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *schemaURL;
@property (copy, nonatomic) NSString *pigeonHint;
@property (retain, nonatomic) AWEURLModel *imageURL;
@property (nonatomic) double contentW;
@property (nonatomic) double contentH;

+ (id)imageURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

@class NSNumber, AWEURLModel;

@interface AWEActivityShareModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *useMusicCount;
@property (retain, nonatomic) NSNumber *diggCount;
@property (retain, nonatomic) AWEURLModel *musicCoverURL;
@property (retain, nonatomic) AWEURLModel *musicQRCodeURL;

+ (id)musicCoverURLJSONTransformer;
+ (id)musicQRCodeURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDict:(id)a0;

@end

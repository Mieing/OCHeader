@class NSString, AWEMVBannerSmallCoverModel, AWEURLModel;

@interface AWEMVChannelBannerModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *configID;
@property (copy, nonatomic) NSString *configSource;
@property (retain, nonatomic) AWEURLModel *coverURL;
@property (retain, nonatomic) AWEMVBannerSmallCoverModel *smallCoverURL;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (copy, nonatomic) NSString *landingURL;
@property (nonatomic) BOOL showActivityTags;
@property (nonatomic) unsigned long long showStrategy;
@property (copy, nonatomic) NSString *spotKey;
@property (copy, nonatomic) NSString *videoSource;
@property (nonatomic) BOOL hadPreloadCover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverURLJSONTransformer;
+ (id)smallCoverURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end

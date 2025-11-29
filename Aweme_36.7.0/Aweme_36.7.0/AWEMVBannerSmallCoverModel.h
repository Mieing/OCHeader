@class NSString, AWEURLModel;

@interface AWEMVBannerSmallCoverModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEURLModel *horizontalCoverURL;
@property (retain, nonatomic) AWEURLModel *verticalCoverURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)horizontalCoverURLJSONTransformer;
+ (id)verticalCoverURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

@class NSString, AWEAIPropTaskVideoSubSourceResponseModel;

@interface AWEAIPropTaskVideoResponseModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEAIPropTaskVideoSubSourceResponseModel *cover;
@property (retain, nonatomic) AWEAIPropTaskVideoSubSourceResponseModel *video;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverJSONTransformer;
+ (id)videoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

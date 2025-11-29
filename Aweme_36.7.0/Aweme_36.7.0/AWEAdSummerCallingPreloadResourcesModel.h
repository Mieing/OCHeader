@class NSString, AWEURLModel;

@interface AWEAdSummerCallingPreloadResourcesModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEURLModel *dynamotorAlphaVideoURL;
@property (retain, nonatomic) AWEURLModel *longPressGuideImageURL;
@property (retain, nonatomic) AWEURLModel *longPressProgressImageURL;
@property (retain, nonatomic) AWEURLModel *transitionAnimatedEggURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

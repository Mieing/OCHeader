@class NSString, AWELVideoAdSceneModel;

@interface AWELVideoAdInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWELVideoAdSceneModel *adBefore;
@property (retain, nonatomic) AWELVideoAdSceneModel *adUnderVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

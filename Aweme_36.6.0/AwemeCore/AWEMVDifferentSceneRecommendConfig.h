@class AWEMVDifferentSceneCommonConfig, NSString, AWEMVChannelPageContext;

@interface AWEMVDifferentSceneRecommendConfig : NSObject <AWEMVDifferentSceneProtocol>

@property (weak, nonatomic) AWEMVChannelPageContext *pageContext;
@property (retain, nonatomic) AWEMVDifferentSceneCommonConfig *sceneConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (Class)aAWEStudioPublishAwemeAdapterClass;

- (id)aAWEPadModuleAdapter;
- (id)dataConfig;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (id)cardUIConfig;
- (id)aAWEStudioPublishAwemeAdapter;
- (id)componentControllerArrayWithDCConfig:(id)a0;
- (void)updateDCConfigUnderScene:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end

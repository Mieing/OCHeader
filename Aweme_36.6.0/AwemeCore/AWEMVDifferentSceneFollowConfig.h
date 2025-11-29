@class AWEMVDifferentSceneCommonConfig, NSString, AWEMVChannelPageContext, AWEListDataController;

@interface AWEMVDifferentSceneFollowConfig : NSObject <AWEUserMessage, AWEMVDifferentSceneProtocol>

@property (weak, nonatomic) AWEMVChannelPageContext *pageContext;
@property (retain, nonatomic) AWEMVDifferentSceneCommonConfig *sceneConfig;
@property (retain, nonatomic) AWEListDataController *dataController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (Class)aAWEStudioPublishAwemeAdapterClass;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (id)aAWEPadModuleAdapter;
- (id)dataConfig;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (id)cardUIConfig;
- (id)bizComponentControllerArrayWithDCConfig:(id)a0;
- (id)qualityComponentControllerArrayWithDCConfig:(id)a0;
- (id)aAWEStudioPublishAwemeAdapter;
- (id)componentControllerArrayWithDCConfig:(id)a0;
- (void)updateDCConfigUnderScene:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dealloc;

@end

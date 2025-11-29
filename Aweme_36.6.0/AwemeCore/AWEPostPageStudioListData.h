@class AWEStudioComposerPublishBasicFeature, NSString, AWEPostPageContext;
@protocol AWEPostPageListDataTemplate, AWEPostPageFeatureConfigService;

@interface AWEPostPageStudioListData : NSObject <AWEPostPageListDataTemplate>

@property (weak, nonatomic) AWEPostPageContext *context;
@property (retain, nonatomic) id<AWEPostPageListDataTemplate> template;
@property (weak, nonatomic) id<AWEPostPageFeatureConfigService> featureConfigService;
@property (weak, nonatomic) AWEStudioComposerPublishBasicFeature *basicFeature;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEStudioPublishAwemeAdapterClass;
+ (Class)aACCMidVideoCreationProtocolClass;

- (id)aAWEStudioPublishAwemeAdapter;
- (BOOL)isNewFriendsDailyPublishPanelExperimentStatus;
- (void)bindServices:(id)a0;
- (id)aACCMidVideoCreationProtocol;
- (void)configSection:(id)a0 atIndex:(long long)a1;
- (id)buildTemplate;
- (void).cxx_destruct;
- (id)listData;

@end

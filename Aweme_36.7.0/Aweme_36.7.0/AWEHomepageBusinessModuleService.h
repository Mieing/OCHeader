@class NSString;

@interface AWEHomepageBusinessModuleService : HTSService <AWEHomepageBusinessModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)newVersionFeedbackIsShowOnRecommendFeedPage;
- (void)updateNewVersionFeedbackViewHidden:(BOOL)a0;
- (id)getChannelConfigWithChannelType:(id)a0;
- (id)getTopPublicPrePluginControllerWithChannel:(id)a0;
- (id)getTopPublicPostPluginControllerWithChannel:(id)a0;
- (id)getTopPrivatePrePluginControllerWithChannel:(id)a0;
- (id)getTopPrivatePostPluginControllerWithChannel:(id)a0;
- (id)getBottomPublicPrePluginControllerWithChannel:(id)a0;
- (id)getBottomPublicPostPluginControllerWithChannel:(id)a0;
- (id)getBottomPrivatePrePluginControllerWithChannel:(id)a0;
- (id)getBottomPrivatePostPluginControllerWithChannel:(id)a0;

@end

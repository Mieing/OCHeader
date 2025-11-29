@class NSDictionary, NSString;

@interface AWEStoryPrivacyService : HTSService <AWEStoryPrivacyService, AWEPublishTaskMessage, AWEIMSettingModelUpdateMessage>

@property (retain, nonatomic) NSDictionary *storyTTLTextConfig;
@property (retain, nonatomic) NSDictionary *storyInteractiveTextConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (BOOL)hasSetStoryTTL;
- (long long)defaultStoryTTL;
- (id)storyTTLOptions;
- (long long)currentUserStoryTTL;
- (id)descriptionForStoryTTL:(long long)a0;
- (id)shortDescriptionForStoryTTL:(long long)a0;
- (BOOL)isStoryWithinTTL:(id)a0;
- (void)changeStoryTTL:(long long)a0 completion:(id /* block */)a1;
- (BOOL)shouldShowStory25GuidePopoverWithScene:(id)a0;
- (id)story25GuidePopoverTextWithScene:(id)a0;
- (void)markStory25GuidePopoverShownWithScene:(id)a0;
- (BOOL)hasSetStoryInteractiveScope;
- (id)storyInteractiveScopeOptions;
- (long long)defaultStoryInteractiveScope;
- (long long)currentUserStoryInteractiveScope;
- (id)descriptionForStoryInteractiveScope:(long long)a0;
- (id)dialogDescriptionForStoryInteractiveScope:(long long)a0;
- (void)changeStoryInteractiveScope:(long long)a0 completion:(id /* block */)a1;
- (BOOL)canInteractWithStoryFromUser:(id)a0;
- (BOOL)canInteractUsingStoryMessageWithStoryFromUser:(id)a0;
- (id)storyPermissionSheetWithContext:(id)a0;
- (BOOL)isStoryPermissionSheet:(id)a0;
- (void)didUpdateIMSetting:(BOOL)a0 source:(id)a1 currentModel:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

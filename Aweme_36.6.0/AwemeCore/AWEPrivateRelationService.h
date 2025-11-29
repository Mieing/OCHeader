@class NSString, AWESocialRelationObserver;

@interface AWEPrivateRelationService : HTSService <AWEPrivateRelationService>

@property (retain, nonatomic) AWESocialRelationObserver *mateObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableNotShow24Story;
- (BOOL)canShowNotShow24StorySettingWithUser:(id)a0;
- (BOOL)canShowNotSee24StorySettingWithUser:(id)a0;
- (void)setNotShow24Story:(BOOL)a0 user:(id)a1 completion:(id /* block */)a2;
- (void)setNotSee24Story:(BOOL)a0 user:(id)a1 completion:(id /* block */)a2;
- (id)notShow24StoryTextWithUser:(id)a0;
- (id)notSee24StoryTextWithUser:(id)a0;
- (id)show24StoryTextWithUser:(id)a0;
- (id)notShowPostAnd24StoryTextWithUser:(id)a0;
- (id)notSeePostAnd24StoryTextWithUser:(id)a0;
- (id)privateRelationDescriptionWithUser:(id)a0;
- (id)notShow24StoryToastWithUser:(id)a0 error:(id)a1;
- (id)notSee24StoryToastWithUser:(id)a0 error:(id)a1;
- (void)p_requestBlockUser:(id)a0 isBlock:(BOOL)a1 source:(unsigned long long)a2 completion:(id /* block */)a3;
- (id)p_storyTabName;
- (void).cxx_destruct;
- (id)init;

@end

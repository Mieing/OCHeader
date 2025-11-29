@class NSString;

@interface AWEPCTTransitionTaskCreator : NSObject <AWEPCTBusinessTaskCreatorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createTaskWithContext:(id)a0;
+ (void)trackShowCameraWithPublishModel:(id)a0;
+ (long long)sceneWithApiModel:(id)a0;
+ (void)transitionWithScene:(long long)a0 context:(id)a1 finishHandler:(id /* block */)a2;
+ (void)prepareDataForImageAlbumWithScene:(long long)a0 context:(id)a1;
+ (void)trackShootEditorWithPublishModel:(id)a0;
+ (void)trackEnterPostPageWithPublishModel:(id)a0;


@end

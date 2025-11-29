@class NSString;

@interface AWEIMInteractiveService : HTSService <AWEIMInteractiveService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playAnimationWithResourceName:(id)a0 completion:(id /* block */)a1;
- (void)playAnimationWithResourceName:(id)a0 onView:(id)a1 completion:(id /* block */)a2;
- (BOOL)isAnimationResourceReady:(id)a0;
- (id)emoticonModelsWithName:(id)a0;
- (id)commonResourceFilePath:(id)a0;
- (void)lazyDownloadCommonResourceName:(id)a0 complete:(id /* block */)a1;

@end

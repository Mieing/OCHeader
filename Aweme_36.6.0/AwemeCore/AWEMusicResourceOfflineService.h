@class NSString;

@interface AWEMusicResourceOfflineService : HTSService <AWEMusicResourceOfflineService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoadWhenDylibLoad;

- (id)cdnPathPart;
- (void)loadResourceName:(id)a0;
- (id)sourcePathName:(id)a0;

@end

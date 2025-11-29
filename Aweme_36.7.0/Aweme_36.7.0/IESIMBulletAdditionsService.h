@class NSString;

@interface IESIMBulletAdditionsService : HTSService <IESIMBulletAdditionsService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preloadResourceWithSchema:(id)a0 dataResource:(id)a1 completionHandler:(id /* block */)a2;
- (void)preActiveGeckoWithPositionType:(id)a0 positionID:(id)a1;
- (id)hybridContainer;
- (id)bizGlobalPropsWithSchema:(id)a0;
- (void)trackPreloadInfoWithBulletScene:(id)a0 preloadScene:(long long)a1 preloadCount:(long long)a2 extraInfo:(id)a3;
- (id)bdxBusinessIdentifier;
- (unsigned long long)defaultLayoutType;
- (id)customBridgeMethodClasses;
- (BOOL)shouldAdaptBigFontStyleWithScene:(id)a0;
- (double)bigFontStyleScale;
- (BOOL)hasCacheWithParams:(id)a0 channel:(id)a1;
- (id)abTestValueForKey:(id)a0;

@end

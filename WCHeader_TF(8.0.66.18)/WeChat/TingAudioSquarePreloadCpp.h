@class NSString;

@interface TingAudioSquarePreloadCpp : UnitRCObjcBaseProxyClass <TingAudioSquarePreload>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)prelaod:(id)a0;
- (id)readPreloadResponse;
- (void)clearPreloadResponse;

@end

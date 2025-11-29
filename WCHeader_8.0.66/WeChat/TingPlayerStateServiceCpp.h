@class NSString;

@interface TingPlayerStateServiceCpp : UnitRCObjcBaseProxyClass <TingPlayerStateService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)getPlayerState;
- (long long)getPlayerPosition;
- (long long)getPlayerDisplayTimeMs;
- (long long)getPlayerDuration;
- (long long)getPlayerDownloadPercent;
- (float)getPlayRate;
- (void)addPlayerStateClient:(id)a0;
- (void)removePlayerStateClient:(id)a0;

@end

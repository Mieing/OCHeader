@class NSString;

@interface AWEDPlayerComponentLandscape : AWEDPlayerBaseComponent <AWEDPlayerComponentLandscapeProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)changePlayerFrameIfNeededWithAnimated:(BOOL)a0;
- (void)updatePlayerControllerFrame;
- (void)updatePauseIconFrameForFakeLandscape;
- (BOOL)realChangePlayerFrameIfNeeded;
- (BOOL)shouldChangeFrameForLandscape;
- (double)advanceCalculateLandscapeMoveUpValue;
- (void)viewWillLayoutSubviews;

@end

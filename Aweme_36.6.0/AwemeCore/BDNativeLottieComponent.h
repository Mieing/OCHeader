@class NSString;

@interface BDNativeLottieComponent : BDNativeWebBaseComponent <BDNativeLottieViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nativeTagName;
+ (id)nativeTagVersion;

- (void)handlePropertyForLottieView:(id)a0 withParams:(id)a1;
- (void)handleAnimationSourceForLottieView:(id)a0 withParams:(id)a1;
- (void)handleAnimationProgressForLottieView:(id)a0 withParams:(id)a1;
- (void)handleAnimationPlayStateForLottieView:(id)a0 withParams:(id)a1;
- (void)onNativeLottieErrorHappened:(id)a0 extraDetail:(id)a1;
- (void)sendEvent:(id)a0 withEventCode:(unsigned long long)a1 extraDetail:(id)a2;
- (void)onNativeLottieSourceLoaded:(id)a0 extraDetail:(id)a1;
- (void)onNativeLottiePlayStateChanged:(id)a0 extraDetail:(id)a1;
- (void)onNativeLottieFrameUpdated:(id)a0 extraDetail:(id)a1;
- (id)fetchWebURL;
- (id)insertInNativeContainerObject:(id)a0 params:(id)a1;
- (void)updateInNativeContainerObject:(id)a0 params:(id)a1;
- (void)deleteInNativeContainerObject:(id)a0 params:(id)a1;

@end

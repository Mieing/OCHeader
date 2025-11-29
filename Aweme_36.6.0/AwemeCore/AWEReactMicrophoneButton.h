@interface AWEReactMicrophoneButton : ACCAnimatedButton

@property (nonatomic) BOOL isMuted;
@property (nonatomic) BOOL isLockedDisable;

- (void)mutedMicrophone:(BOOL)a0;
- (void)lockButtonDisable:(BOOL)a0 shouldShow:(BOOL)a1;
- (void)p_updateIcon;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;

@end

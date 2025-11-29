@class NSString;

@interface AWEIMAudioTextButtonComponent : AWEIMFlexComponent <AWEIMAudioTextButtonInterface, IESIMThreadAppendixAction>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)hideAudioTextButton;
- (id)bubbleColor:(id)a0;
- (void)audioToTextBubbleClick;
- (void)showThreadAppendixView;
- (void)hideThreadAppendixView;
- (void)showAudioToTextBubble:(BOOL)a0;

@end

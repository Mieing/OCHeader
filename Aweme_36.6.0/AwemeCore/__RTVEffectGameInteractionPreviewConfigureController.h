@class NSString;

@interface __RTVEffectGameInteractionPreviewConfigureController : NSObject <RTVInteractionPreviewContainerConfigurator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didChangeInteractionController:(id)a0 context:(id)a1;
- (BOOL)autoAdjustPreviewScaleAccrodingToCameraOffStatus;
- (double)preferredSpacing;
- (unsigned long long)fullContentStyle;
- (unsigned long long)maxShowPreviewCount;
- (BOOL)needDisplayChatMessages;
- (Class)previewControllerClass;
- (double)preferredHeight;

@end

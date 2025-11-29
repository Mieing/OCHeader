@class NSString;

@interface AWELighteningShootGuideButtonPriorityHandler : NSObject <AWEPlayInteractionSpecialButtonPriorityHandlerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)shouldActivateSpecialButtonWithData:(id)a0 context:(id)a1;
- (BOOL)shouldShowGuideAweme:(id)a0;

@end

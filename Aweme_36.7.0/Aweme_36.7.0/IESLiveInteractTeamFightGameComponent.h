@class NSString;

@interface IESLiveInteractTeamFightGameComponent : IESLiveInteractComponentBase <HTSLiveMessageSubscriber>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindContext;
- (void)showBubbleGuide:(id)a0;
- (void)showSwitchModeBubbleGuide:(id)a0;
- (void)showTextAndSchemaBubbleGuide:(id)a0;
- (void)showTextBubbleGuide:(id)a0;
- (void)messageReceived:(id)a0;

@end

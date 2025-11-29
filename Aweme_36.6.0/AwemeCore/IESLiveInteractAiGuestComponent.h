@class NSArray, NSString;

@interface IESLiveInteractAiGuestComponent : IESLiveInteractComponentBase <IESLiveInteractAiGuestService, IESLiveInteractionAiGuestInterface, IESLiveInteractionLinkerServiceAction>

@property (retain, nonatomic) NSArray *guestList;
@property (nonatomic) BOOL hasAiGuest;
@property (nonatomic) double startTimeStamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentUnmount;
- (id)aiGuestInfoForTrack;
- (void)showLinkTipsAlertWithActionBlock:(id /* block */)a0;
- (void)interactionLinkerService:(id)a0 audioPublishingChanged:(BOOL)a1 uid:(id)a2;
- (void)interactionLinkerService:(id)a0 videoPublishingChanged:(BOOL)a1 uid:(id)a2;
- (void)componentBindContext;
- (void)componentDidUpdatedGuestList:(id)a0;
- (void)updateHasAiGuest:(id)a0;
- (id)currentAiGuestId;
- (void).cxx_destruct;

@end

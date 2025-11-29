@class NSString;

@interface IESLiveAudioVideoStreamPlayFragment : IESLiveRoomComponent <IESLiveSocialInteractPreLoadExAction, IESLiveRevenueInteractAction>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)endRevenueInteractWithScene:(unsigned long long)a0;
- (void)currentServerLayoutDidChangedFrom:(id)a0 to:(id)a1;
- (void)interactionModeStartedWithLayout:(id)a0;
- (void)interactionModeEndedWithLayout:(id)a0;
- (void)setup;

@end

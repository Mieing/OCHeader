@class NSString;

@interface IESLiveInteractionTrackerContextInjectionImpl : NSObject <IESLiveInteractionTrackerContextInjection>

@property (copy, nonatomic) id /* block */ guestConnectionSuccessInjectionBlock;
@property (copy, nonatomic) id /* block */ guestConnectionOverInjectionBlock;
@property (copy, nonatomic) id /* block */ voiceRoomShowInjectionBlock;
@property (copy, nonatomic) id /* block */ voiceRoomWatchDurationInjectionBlock;
@property (copy, nonatomic) id /* block */ anchorAudienceConnectionOverInjectionBlock;
@property (copy, nonatomic) id /* block */ anchorAudienceConnectionSuccessInjectionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end

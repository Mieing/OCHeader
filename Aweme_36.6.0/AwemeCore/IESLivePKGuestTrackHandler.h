@class IESLivePKGuestTrackerContext;

@interface IESLivePKGuestTrackHandler : NSObject

@property (weak, nonatomic) IESLivePKGuestTrackerContext *context;

- (id)initWithDIContext:(id)a0;
- (void)trackWithEvent:(id)a0 extra:(id)a1;
- (void)trackWithInteractionEvent:(id)a0 extra:(id)a1;
- (void)trackAudienceOnGuestConnectionOver;
- (void)trackAudienceWithPKEnd;
- (void)trackAudienceWithPunishEnd;
- (void).cxx_destruct;

@end

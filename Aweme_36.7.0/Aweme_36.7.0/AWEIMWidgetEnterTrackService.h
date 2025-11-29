@class NSString;

@interface AWEIMWidgetEnterTrackService : HTSService <AWEIMWidgetEnterTrackService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEnterMessageTabFromWidgetWithContext:(id)a0;
- (void)trackClickWidgetWithContext:(id)a0;

@end

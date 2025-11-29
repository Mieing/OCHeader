@class NSString;

@interface AWEUGActivityTracker : HTSService <AWEUGActivityTrackerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackPendantShowCheck:(id)a0 result:(long long)a1;
+ (void)trackFeedPendantSync:(id)a0;
+ (void)trackPendantDownload:(id)a0 code:(long long)a1;


@end

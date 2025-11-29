@class NSString;

@interface AWEPluginOrderCustomImpl : NSObject <BDPOrderPluginDelegate>

@property (copy, nonatomic) id /* block */ ratingCompletedCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)AWEJSBridgeBroadcastNotificationReceived:(id)a0;
- (void)bdp_rateAwemeOrderWithString:(id)a0 appID:(id)a1 ratingCompletedCallback:(id /* block */)a2;
- (BOOL)bdp_shouldShowOrderCommentGuideForEntranceFrom:(id)a0 enterFromMerge:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end

@class NSString, NSDictionary, AWEFriendsTabPitayaContext, AWEFriendsTabVideoContext;

@interface AWEFriendsTabUserContextManager : NSObject <AWEFriendsTabUserContextManagerProtocol>

@property (retain, nonatomic) NSDictionary *exitParams;
@property (retain, nonatomic) AWEFriendsTabVideoContext *videoContext;
@property (retain, nonatomic) AWEFriendsTabPitayaContext *pitayaContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)enableSendContextToSocialCountWhenColdLaunch;
- (id)getClientContext;
- (BOOL)enableSendContextToSocialCount;
- (BOOL)enableSendContextToV2Feed;
- (BOOL)enableSendContextToPreload;
- (BOOL)enableSendContextToFamiliarFeed;
- (id)getPreloadCacheContext;
- (id)getUnreadCacheContext;
- (id)getHistoryCacheContext;
- (id)appStateContext;
- (void)recordExitTabParams:(id)a0;
- (void).cxx_destruct;
- (id)userActionContext;

@end

@class BDXBridgeEventSubscriber, NSString;

@interface AWEConcernLynxCommonManager : NSObject <AWEUserMessage>

@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterStaticLoad;
+ (id)sharedInstance;

- (void)didFinishPushUpdateUser:(id)a0;
- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishHidePostFromHer:(id)a0 status:(long long)a1;
- (void)unbindLynxMessage;
- (void)bindLynxMessage;
- (void)onVideoFavoriteNotification:(id)a0;
- (void)sendFollowStatusChangeEvent:(id)a0 status:(long long)a1;
- (void)sendEvent:(id)a0 extraInfo:(id)a1;
- (void)sendEvent:(id)a0 WithUserID:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

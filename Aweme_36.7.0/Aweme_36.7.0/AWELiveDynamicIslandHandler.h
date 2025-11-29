@class AWELiveDynamicIslandActivitySingleton, NSString;

@interface AWELiveDynamicIslandHandler : NSObject <AWELiveDynamicIslandActivityProtocol> {
    void /* unknown type, empty encoding */ pushActivity;
    void /* function */ anchorNickName;
    void /* function */ roomTitle;
    void /* function */ roomSchema;
    void /* function */ onlineWatchUser;
    void /* function */ roomDiggTotal;
}

@property (nonatomic, readonly) AWELiveDynamicIslandActivitySingleton *activitySingleton;
@property (nonatomic, copy) NSString *anchorNickName;
@property (nonatomic, copy) NSString *roomTitle;
@property (nonatomic, copy) NSString *roomSchema;
@property (nonatomic, copy) NSString *onlineWatchUser;
@property (nonatomic, copy) NSString *roomDiggTotal;
@property (nonatomic) long long activityStyle;
@property (nonatomic) long long activityType;
@property (nonatomic) double activityProgress;

- (void)startActivity:(id)a0 completion:(id /* block */)a1;
- (void)updateActivity:(id)a0 completion:(id /* block */)a1;
- (void)updateRealtimeActivity:(id)a0;
- (void)endActivityAll;
- (BOOL)dynamicIslandIsShowing;
- (id)dynamicIslandActivityId;
- (void)activityAuthorizationInfoTrackerWithCompletion:(id /* block */)a0;
- (BOOL)activityHasAuthorized;
- (void).cxx_destruct;
- (id)init;
- (void)endActivity;
- (void)handleActivity:(id)a0;

@end

@class NSString, AWELiveDynamicIslandHandler;

@interface AWELiveDynamicIslandServiceImpl : NSObject <IESLiveDynamicIslandOuterService>

@property (retain, nonatomic) AWELiveDynamicIslandHandler *activityInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startActivity:(id)a0 completion:(id /* block */)a1;
- (void)updateActivity:(id)a0 completion:(id /* block */)a1;
- (void)updateRealtimeActivity:(id)a0;
- (void)endActivityAll;
- (BOOL)dynamicIslandIsShowing;
- (void)fetchAvatarImageWithParams:(id)a0 completion:(id /* block */)a1;
- (void)dataDefaultsForData:(id)a0;
- (void).cxx_destruct;
- (void)endActivity;

@end

@class NSString, NSDate;

@interface AWELiveInnerPushManager : NSObject <AWELiveInnerPushProtocal>

@property (nonatomic) unsigned long long showTimesInThisColdLaunch;
@property (retain, nonatomic) NSDate *livePushPrevShowTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInnerPushManager;

- (id)currentTopPage;
- (id)enterFrom:(id)a0;
- (void)trackLivePushAbandonWithRoomID:(id)a0 anchorID:(id)a1 abandonReson:(id)a2;
- (id)getURLQueryValueWithURL:(id)a0 queryKey:(id)a1;
- (BOOL)canShowFollowAnchorPushNotice;
- (id)enterMethod:(id)a0;
- (id)pushSource:(id)a0;
- (id)requestPage:(id)a0;
- (id)pushType:(id)a0;
- (void).cxx_destruct;

@end

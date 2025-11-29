@class NSString;

@interface AWEAdPlayletTrackService : HTSService <AWEAdPlayletTrackService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)commonAdParamsWhenUserTrackerWithlogExtraDict:(id)a0;
+ (id)commonAdParamsWhenUserTrackerWithlogExtra:(id)a0;
+ (void)trackPlayletContentRechargeShowWithModel:(id)a0 logExtraDict:(id)a1;
+ (void)trackPlayletContentPaySuccessWithModel:(id)a0 logExtraDict:(id)a1;
+ (void)adPlayletTrackWithModel:(id)a0 label:(id)a1 refer:(id)a2 adExtraDict:(id)a3 logExtraDict:(id)a4;
+ (id)commonAdParamsWhenUserTrackerWithModel:(id)a0;


@end

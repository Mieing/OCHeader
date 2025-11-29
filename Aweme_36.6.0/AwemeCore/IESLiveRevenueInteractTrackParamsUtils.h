@interface IESLiveRevenueInteractTrackParamsUtils : NSObject

+ (id)transformInviteeListToString:(unsigned long long)a0;
+ (id)transfromActionFromSourceToString:(long long)a0;
+ (id)customValueKindsFromConfig:(id)a0;
+ (id)getCommonTrackFromPKStartParams:(id)a0;
+ (id)endParamsByEndReason:(int)a0 isInitiator:(BOOL)a1;
+ (id)modTypeToString:(int)a0;
+ (id)inviteModeToString:(id)a0;
+ (id)transformEndReasonToString:(int)a0;

@end

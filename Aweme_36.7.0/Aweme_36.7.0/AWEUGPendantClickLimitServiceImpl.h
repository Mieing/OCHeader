@class NSString;

@interface AWEUGPendantClickLimitServiceImpl : HTSService <AWEUGPendantClickLimitService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackLogWithKey:(id)a0 message:(id)a1;
+ (void)recordPendantHasShowWithPendantID:(id)a0;
+ (void)recordPendantHasClick:(unsigned long long)a0 pendantID:(id)a1;
+ (double)getCanShowTimeWithPendantID:(id)a0;
+ (void)clearClickRecordsWithPendantID:(id)a0;
+ (void)clearClickRecordsAndTimeWithPendantID:(id)a0;
+ (long long)getExposedDaysWithoutClickForPendantID:(id)a0;
+ (void)caculateIfNeedHideWithDays:(long long)a0 willNotShow:(long long)a1 pendantID:(id)a2;
+ (id)getStartTimeOfToday:(id)a0;
+ (BOOL)checkPendantNotClickDaysInDays:(long long)a0 pendantID:(id)a1;
+ (id)getEndTimeOfToday:(id)a0;
+ (id)dateFromString:(id)a0;


@end

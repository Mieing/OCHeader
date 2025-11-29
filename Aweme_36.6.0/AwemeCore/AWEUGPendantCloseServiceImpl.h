@class NSString;

@interface AWEUGPendantCloseServiceImpl : HTSService <AWEUGPendantCloseService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackLogWithKey:(id)a0 message:(id)a1;
+ (double)getCanShowTimeWithPendantID:(id)a0;
+ (long long)checkPendantCloseTotalCountWithPendantID:(id)a0;
+ (long long)checkPendantCloseInDays:(long long)a0 pendantID:(id)a1;
+ (long long)checkPendantCloseInDate:(id)a0 pendantID:(id)a1;
+ (void)recordCloseWithPendantID:(id)a0;
+ (void)clearCloseRecordsWithPendantID:(id)a0;
+ (void)clearCloseRecordsAndTimeWithPendantID:(id)a0;
+ (void)caculateIfNeedHideWithDays:(long long)a0 maxCloseTimes:(long long)a1 willNotShow:(long long)a2 pendantID:(id)a3;
+ (void)recordCloseTypeColdLaunchShowTimesWithPendantID:(id)a0;
+ (long long)checkRecordCloseTypeColdLaunchShowTimesWithPendantID:(id)a0;
+ (double)getCanShowTimeWithGlobalFrequent;
+ (void)caculateIfNeedHideWithGlobalFrequentMaxCloseTimes:(long long)a0 willNotShow:(long long)a1;
+ (void)recordGlobalFrequentClose;
+ (void)clearGlobalFrequentCloseRecords;
+ (void)clearGlobalFrequentCloseRecordsAndTime;
+ (double)getCanShowTimeFrequentOnceWithPendantID:(id)a0;
+ (void)caculateIfNeedHideWithFrequentOnceDays:(long long)a0 maxCloseTimes:(long long)a1 willNotShow:(long long)a2 pendantID:(id)a3;
+ (id)getStartTimeOfToday:(id)a0;
+ (BOOL)needClearRecordsWhenTakeEffect;
+ (id)dateFromString:(id)a0;
+ (long long)daysBetweenDate:(id)a0 andDate:(id)a1;


@end

@interface BDPSubscribeUtils : NSObject

+ (id)authResultWithTemplateInfos:(id)a0;
+ (id)subscribeResultDescWithStatus:(unsigned long long)a0;
+ (BOOL)checkTemplateIdListIsLegal:(id)a0;
+ (id)callbackErrorWithCode:(long long)a0;
+ (long long)isValidTemplateList:(id)a0;
+ (id)errMsgFromCode:(long long)a0;
+ (unsigned long long)feedCardCheckboxShowStatusWithTemplateInfoList:(id)a0;
+ (long long)authFeedCardNotifyAbStatus;
+ (long long)parseServerErrorWithError:(id)a0;
+ (id)subscribeReminderTypeDescWithType:(unsigned long long)a0;
+ (id)subscribeReminderStatusDescWithStatus:(unsigned long long)a0;
+ (id)subscribeResultDescWithSubscribeResult:(unsigned long long)a0;
+ (BOOL)isExpiredTimeStamp:(double)a0 type:(unsigned long long)a1;
+ (id)getPermissionViewInfoKeyForModelType:(unsigned long long)a0 timeType:(unsigned long long)a1;
+ (long long)transformServerErrCodeToLocalErrCode:(long long)a0;
+ (long long)timeUnitBetweenOldTimeStamp:(double)a0 andNewTimeStamp:(double)a1 forTimeUnit:(double)a2;
+ (long long)callbackResultFromSubscribeErrorCode:(long long)a0;
+ (id)errorTypeFromCode:(long long)a0;
+ (long long)errorCodeFromSubscribeErrorCode:(long long)a0;
+ (long long)isValidTemplateListV2:(id)a0;
+ (id)mapUserActionWithTemplateList:(id)a0;
+ (id)mapCacheData2PopupModel:(id)a0;
+ (id)mapCacheData2TemplateModel:(id)a0;

@end

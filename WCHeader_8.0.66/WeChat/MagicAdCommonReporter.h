@interface MagicAdCommonReporter : NSObject

+ (void)innerKvReportActionType:(unsigned char)a0 posId:(id)a1 aid:(id)a2;
+ (void)innerKvReportActionType:(unsigned char)a0 posId:(id)a1 aid:(id)a2 value:(long long)a3;
+ (void)innerKvReportActionType:(unsigned char)a0 posId:(id)a1 aid:(id)a2 value:(long long)a3 extra:(id)a4;
+ (void)innerKvReportActionType:(unsigned char)a0 posId:(id)a1 aid:(id)a2 value:(long long)a3 extra:(id)a4 extra2:(id)a5;
+ (double)mapActionTypeToSampleRate:(unsigned char)a0;

@end

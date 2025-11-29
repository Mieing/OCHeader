@interface BDMannorUtils : NSObject

+ (id)parseRulesFromRaw:(id)a0;
+ (void)sendTrackWithTrackConfig:(id)a0 areaKey:(id)a1 eventName:(id)a2 dynamicParams:(id)a3;
+ (void)sendMannorLogWith:(unsigned long long)a0 tag:(id)a1 nodeName:(id)a2 nodeMethod:(id)a3 creativeID:(id)a4 componentType:(id)a5 logExtra:(id)a6 extraInfo:(id)a7 debugInfo:(id)a8;
+ (void)sendTrackV3WithTrackConfig:(id)a0 areaKey:(id)a1 eventName:(id)a2 dynamicParams:(id)a3;
+ (void)trackURLs:(id)a0 label:(id)a1 creativeID:(id)a2 extraData:(id)a3 logExtra:(id)a4;
+ (void)sendMannorMonitorWith:(id)a0 creativeID:(id)a1 groupID:(id)a2 logExtra:(id)a3 adExtraData:(id)a4;
+ (void)sendMannorTechMonitorWith:(id)a0 params:(id)a1;
+ (void)sendMannorHMDMonitorWith:(id)a0 creativeID:(id)a1 scene:(id)a2 logExtra:(id)a3 errorCode:(unsigned long long)a4;

@end

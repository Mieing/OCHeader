@interface BDPSubscribeTrackerUtils : NSObject

+ (id)trackCommonParams;
+ (id)authTypeString:(unsigned long long)a0;
+ (void)eventForPermissionViewShowWithTimesType:(unsigned long long)a0 templateInfoList:(id)a1 ifShowFeedRecommendCheckbox:(BOOL)a2 uniqueID:(id)a3;
+ (void)mpNotifyAuthClickWithClickPosition:(id)a0 timesType:(unsigned long long)a1 templateInfoList:(id)a2 ifShowFeedRecommendCheckbox:(BOOL)a3 feedCardShowStatus:(unsigned long long)a4 selectedIndexs:(id)a5 uniqueID:(id)a6;
+ (void)eventForUserPermissionWithResult:(BOOL)a0 timesType:(unsigned long long)a1 isLongTerm:(BOOL)a2 templateInfoList:(id)a3 feedCardShowStatus:(unsigned long long)a4 selectedIndexs:(id)a5 uniqueID:(id)a6;
+ (id)templateInfosToStringWithTemplates:(id)a0;
+ (id)templateInfosIDToStringWithTemplates:(id)a0;
+ (id)selectTemplateInfoStringWithIndexs:(id)a0 templates:(id)a1;
+ (id)templateInfosIDToStringWithTemplates:(id)a0 withIndexs:(id)a1;

@end

@interface AWEIMShareContactListTrackUtility : NSObject

+ (id)p_messageTypeFromTargetType:(unsigned long long)a0;
+ (id)p_panelIDFromTargetType:(unsigned long long)a0 localTimeMs:(id)a1;
+ (id)p_uniqueIDFromTargetType:(unsigned long long)a0;
+ (void)trackActivityDataIfNeededWithEvent:(id)a0 shareModel:(id)a1 routerParam:(id)a2 localTimeMs:(id)a3 extra:(id)a4;
+ (id)getHeadComponentTrackParamWithShareModel:(id)a0;
+ (BOOL)isCellVisibleInTableView:(id)a0 AtIndexPath:(id)a1;

@end

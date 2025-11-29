@interface WCScheduleUtil : MMObject

+ (id)convertMessageWrapToScheduleItem:(id)a0;
+ (id)extractShowContentFromMessage:(id)a0;
+ (id)convertRemindToScheduleItem:(id)a0;
+ (id)convertScheduleItemToRemind:(id)a0;
+ (id)preferredDateForMsgContent:(id)a0;
+ (void)reportScheduleItemAction:(unsigned long long)a0 isChatroom:(BOOL)a1 ContentDateInfo:(id)a2 finalInterval:(unsigned int)a3 selectedRecommendInterval:(unsigned int)a4 chatName:(id)a5;
+ (id)databasePath;

@end

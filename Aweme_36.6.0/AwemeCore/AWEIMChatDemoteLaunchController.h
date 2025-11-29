@class NSString;

@interface AWEIMChatDemoteLaunchController : NSObject <IESIMChatDemoteLaunchControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldDemoteWithTimestamp:(double)a0;
+ (double)demoteTimestamp;
+ (void)updateAllDemoteInfoOnce;
+ (void)updateDemoteTimestamp;
+ (id)demoteMsgTimeDict;
+ (id)demoteUnreadTimeDict;
+ (void)updateDemoteTimestampDict;
+ (void)p_updateDemoteTimestampWithDate:(id)a0;
+ (void)p_updateDemoteTimestampDictWithDate:(id)a0;
+ (id)p_appStartDate;
+ (void)p_lazyLoadTimestampOnce;
+ (void)p_lazyLoadTimeDictOnce;
+ (double)demteStrategyTodayTime;
+ (id)fansGroupConfigName;
+ (id)normalGroupConfigName;
+ (id)privateChatConfigName;


@end

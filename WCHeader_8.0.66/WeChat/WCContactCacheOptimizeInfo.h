@class NSString, NSMutableArray, WCContactCacheOptimizeFeature;

@interface WCContactCacheOptimizeInfo : NSObject <PBCoding>

@property (nonatomic) unsigned int lastCalculateBestLoadTime;
@property (retain, nonatomic) NSMutableArray *bestLoadArrUserName;
@property (nonatomic) unsigned int lastRecordCacheOptimizeInfoToDBTime;
@property (retain, nonatomic) WCContactCacheOptimizeFeature *currentStrategyFeature;
@property (retain, nonatomic) WCContactCacheOptimizeFeature *onlineSearchMaxGroupFeature;
@property (nonatomic) float bestLoadlistScale;
@property (nonatomic) unsigned int allChatRoomStrangerCount;
@property (nonatomic) unsigned int firstRecordCacheOptimizeInfoTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_lastCalculateBestLoadTime;
+ (void)PBArrayAdd_bestLoadArrUserName;
+ (void)PBArrayAdd_lastRecordCacheOptimizeInfoToDBTime;
+ (void)PBArrayAdd_currentStrategyFeature;
+ (void)PBArrayAdd_onlineSearchMaxGroupFeature;
+ (void)PBArrayAdd_bestLoadlistScale;
+ (void)PBArrayAdd_allChatRoomStrangerCount;
+ (void)PBArrayAdd_firstRecordCacheOptimizeInfoTime;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end

@class NSString, NSMutableDictionary;

@interface BTMsgMgrCanvasCardExposedInfo : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableDictionary *dictFirstExposedCardInToday;
@property (nonatomic) unsigned long long lastFirstExposedTimeMs;
@property (retain, nonatomic) NSMutableDictionary *dicMsgId2TraceId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_dictFirstExposedCardInToday;
+ (void)PBArrayAdd_lastFirstExposedTimeMs;
+ (void)PBArrayAdd_dicMsgId2TraceId;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end

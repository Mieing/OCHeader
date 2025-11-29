@class NSString, NSMutableArray;

@interface CgiReportDataModel : MMObject <PBCoding>

@property (nonatomic) unsigned int businessId;
@property (retain, nonatomic) NSMutableArray *itemDataList;
@property (retain, nonatomic) NSString *collectKey;
@property (nonatomic) unsigned long long collectStartTimeMs;
@property (retain, nonatomic) NSString *dataUUID;
@property (nonatomic) unsigned long long firstReqTimeMs;
@property (nonatomic) unsigned long long lastReqTimeMs;
@property (nonatomic) unsigned int reqCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_businessId;
+ (void)PBArrayAdd_itemDataList;
+ (void)PBArrayAdd_collectKey;
+ (void)PBArrayAdd_collectStartTimeMs;
+ (void)PBArrayAdd_dataUUID;
+ (void)PBArrayAdd_firstReqTimeMs;
+ (void)PBArrayAdd_lastReqTimeMs;
+ (void)PBArrayAdd_reqCount;
+ (void)initialize;
+ (id)createItemData:(unsigned int)a0 andItemType:(unsigned int)a1 andItemId:(id)a2 andCurrPage:(id)a3 andSourcePage:(id)a4 andRefPage:(id)a5 andSdkSessionId:(id)a6 andEventId:(id)a7 andCliTimeMs:(unsigned long long)a8 andData:(id)a9;
+ (id)simpleLogForData:(id)a0;

- (id)getPBPropertyTable;
- (id)initWithBusinessId:(unsigned int)a0;
- (id)simpleLog;
- (void)noteStartReq;
- (void)noteReqFail;
- (long long)compare:(id)a0;
- (BOOL)canSend:(unsigned long long)a0;
- (unsigned long long)calcPenaltyTimeMs;
- (void).cxx_destruct;

@end

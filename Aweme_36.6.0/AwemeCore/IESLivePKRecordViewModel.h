@class IESLiveRevenueInteractApi, NSString, NSMutableArray, HTSLiveRoom;

@interface IESLivePKRecordViewModel : NSObject

@property (retain, nonatomic) IESLiveRevenueInteractApi *api;
@property (nonatomic) long long currentOffset;
@property (nonatomic) unsigned long long currentCategoryType;
@property (retain, nonatomic) NSMutableArray *recordsArray;
@property (copy, nonatomic) NSString *currentReserveOffset;
@property (nonatomic) unsigned long long currentReserveCategoryType;
@property (retain, nonatomic) NSMutableArray *reserveRecordsArray;
@property (retain, nonatomic) HTSLiveRoom *room;
@property (copy, nonatomic) NSString *tips;
@property (nonatomic) long long consecutiveWinCount;
@property (copy, nonatomic) NSString *reserveRecordTips;

- (void)fetchPKRecordType:(unsigned long long)a0;
- (void)fetchBattleReserveRecordType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end

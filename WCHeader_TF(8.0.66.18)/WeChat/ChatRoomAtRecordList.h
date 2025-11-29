@class NSString, NSMutableArray;

@interface ChatRoomAtRecordList : MMObject <PBCoding>

@property (retain, nonatomic) NSString *roomUserName;
@property (retain, nonatomic) NSMutableArray *records;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_records;
+ (void)initialize;
+ (id)GetKvForCurrentUser;
+ (id)GetRecordForRoom:(id)a0;

- (id)getPBPropertyTable;
- (id)initWithUserName:(id)a0;
- (void)saveToKV;
- (void)addAtRecord:(id)a0;
- (void)addAtRecords:(id)a0;
- (void)ensureRecordCount;
- (id)getRecentAtContacts:(id)a0;
- (void).cxx_destruct;

@end

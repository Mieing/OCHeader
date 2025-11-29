@class NSString, NSMutableArray;

@interface EnterpriseRoomData : MMObject <PBCoding, WCTColumnCoding>

@property (retain, nonatomic) NSMutableArray *m_aryMemberList;
@property (nonatomic) unsigned int m_uiMaxMemberCount;
@property (retain, nonatomic) NSString *m_nsOwner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_aryMemberList;
+ (void)PBArrayAdd_m_uiMaxMemberCount;
+ (void)PBArrayAdd_m_nsOwner;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (void).cxx_destruct;

@end

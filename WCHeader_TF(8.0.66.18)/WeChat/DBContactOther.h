@class NSString;

@interface DBContactOther : NSObject <PBCoding, WCTColumnCoding>

@property (nonatomic) unsigned int deleteFlag;
@property (nonatomic) unsigned int friendScene;
@property (retain, nonatomic) NSString *antispamTicket;
@property (retain, nonatomic) NSString *sourceExtInfo;
@property (retain, nonatomic) NSString *groupMemberTicket;
@property (nonatomic) unsigned long long localBitFlag;
@property (nonatomic) unsigned int addCreateTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_deleteFlag;
+ (void)PBArrayAdd_friendScene;
+ (void)PBArrayAdd_antispamTicket;
+ (void)PBArrayAdd_sourceExtInfo;
+ (void)PBArrayAdd_groupMemberTicket;
+ (void)PBArrayAdd_localBitFlag;
+ (void)PBArrayAdd_addCreateTime;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (void).cxx_destruct;

@end

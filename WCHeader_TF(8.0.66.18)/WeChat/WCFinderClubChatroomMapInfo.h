@class ChatroomBindInfo, NSString, BindFinderClubInfo, PrepareFinder;

@interface WCFinderClubChatroomMapInfo : NSObject <PBCoding, WCTTableCoding, WCTColumnCoding>

@property (retain, nonatomic) PrepareFinder *finderPrepare;
@property (copy, nonatomic) NSString *chatroomId;
@property (nonatomic) BOOL isChatroomOwner;
@property (copy, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long permissionFlag;
@property (nonatomic) unsigned long long cacheTime;
@property (nonatomic) unsigned int queryInterval;
@property (retain, nonatomic) ChatroomBindInfo *accountBindInfo;
@property (retain, nonatomic) BindFinderClubInfo *bindFinderClubInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;

+ (void)PBArrayAdd_chatroomId;
+ (void)PBArrayAdd_finderUsername;
+ (void)PBArrayAdd_cacheTime;
+ (void)PBArrayAdd_queryInterval;
+ (void)PBArrayAdd_permissionFlag;
+ (void)PBArrayAdd_accountBindInfo;
+ (void)PBArrayAdd_bindFinderClubInfo;
+ (void)PBArrayAdd_isChatroomOwner;
+ (void)initialize;
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)chatroomId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_chatroomId;
+ (const void *)finderUsername;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_finderUsername;
+ (const void *)cacheTime;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_cacheTime;
+ (const void *)queryInterval;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_queryInterval;
+ (const void *)permissionFlag;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_permissionFlag;
+ (const void *)accountBindInfo;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_accountBindInfo;
+ (const void *)bindFinderClubInfo;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_bindFinderClubInfo;
+ (const void *)isChatroomOwner;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_isChatroomOwner;
+ (void)__wcdb_column_constraint_8:(void *)a0;
+ (void)__wcdb_index_9:(void *)a0;

- (id)getPBPropertyTable;
- (id)initWithChatroomId:(id)a0 finderUsername:(id)a1 permissionFlag:(unsigned long long)a2 queryInterval:(unsigned int)a3 accountBindInfo:(id)a4;
- (unsigned long long)nextCheckTime;
- (BOOL)shouldShowClubEntrance;
- (BOOL)hasClubContact;
- (void).cxx_destruct;

@end

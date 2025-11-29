@class NSString, NSMutableArray, NSMutableDictionary;

@interface OpenImChatRoomMigrateDataPB : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *migrateOpenImChatRoomList;
@property (retain, nonatomic) NSMutableDictionary *dicHadGetContactDetialMigrateAssociateChatRoom;
@property (retain, nonatomic) NSMutableDictionary *dicActiveUserWaitForOpenImMigrate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_migrateOpenImChatRoomList;
+ (void)PBArrayAdd_dicActiveUserWaitForOpenImMigrate;
+ (void)PBArrayAdd_dicHadGetContactDetialMigrateAssociateChatRoom;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end

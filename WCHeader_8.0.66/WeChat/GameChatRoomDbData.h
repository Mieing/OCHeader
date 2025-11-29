@class NSString;

@interface GameChatRoomDbData : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *chatRoomUserName;
@property (nonatomic) unsigned long long lastMaxExposureSeq;
@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)chatRoomUserName;
+ (const void *)__wcdb_synthesize_19:(void *)a0;
+ (id)swift_chatRoomUserName;
+ (const void *)lastMaxExposureSeq;
+ (const void *)__wcdb_synthesize_20:(void *)a0;
+ (id)swift_lastMaxExposureSeq;
+ (void)__wcdb_column_constraint_21:(void *)a0;

- (void).cxx_destruct;

@end

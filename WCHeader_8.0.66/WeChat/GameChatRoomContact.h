@class NSString, NSData;

@interface GameChatRoomContact : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSData *pbData;
@property (nonatomic) unsigned int updateTime;
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
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_userName;
+ (const void *)pbData;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_pbData;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_updateTime;
+ (void)__wcdb_column_constraint_3:(void *)a0;

- (id)init;
- (id)userData;
- (void).cxx_destruct;

@end

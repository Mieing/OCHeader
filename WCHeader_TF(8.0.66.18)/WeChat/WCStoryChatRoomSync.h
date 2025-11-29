@class NSString, NSData;

@interface WCStoryChatRoomSync : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *chatRoomName;
@property (nonatomic) unsigned int nextSyncTime;
@property (retain, nonatomic) NSData *buffer;
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
+ (const void *)chatRoomName;
+ (const void *)__wcdb_synthesize_17:(void *)a0;
+ (id)swift_chatRoomName;
+ (const void *)nextSyncTime;
+ (const void *)__wcdb_synthesize_18:(void *)a0;
+ (id)swift_nextSyncTime;
+ (const void *)buffer;
+ (const void *)__wcdb_synthesize_19:(void *)a0;
+ (id)swift_buffer;
+ (void)__wcdb_column_constraint_20:(void *)a0;
+ (void)__wcdb_index_21:(void *)a0;

- (void).cxx_destruct;

@end

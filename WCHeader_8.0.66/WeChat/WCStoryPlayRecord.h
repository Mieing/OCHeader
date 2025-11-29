@class NSString;

@interface WCStoryPlayRecord : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *tid;
@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int playCount;
@property (nonatomic) unsigned int lastPlayTime;
@property (nonatomic) unsigned int lastPlaySecne;
@property (nonatomic) unsigned int bHitPreload;
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
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_tid;
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_userName;
+ (const void *)playCount;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_playCount;
+ (const void *)lastPlayTime;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_lastPlayTime;
+ (const void *)bHitPreload;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_bHitPreload;
+ (const void *)lastPlaySecne;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_lastPlaySecne;
+ (void)__wcdb_column_constraint_6:(void *)a0;
+ (void)__wcdb_index_7:(void *)a0;
+ (void)__wcdb_index_8:(void *)a0;

- (void).cxx_destruct;

@end

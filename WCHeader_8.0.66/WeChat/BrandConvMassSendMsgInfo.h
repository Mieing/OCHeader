@class NSString;

@interface BrandConvMassSendMsgInfo : NSObject <WCTTableCoding>

@property (nonatomic) unsigned int localId;
@property (nonatomic) long long serverId;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) BOOL isMassSend;
@property (nonatomic) unsigned int sceneType;
@property (nonatomic) unsigned int massSendType;
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
+ (const void *)localId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_localId;
+ (const void *)serverId;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_serverId;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_createTime;
+ (const void *)isMassSend;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_isMassSend;
+ (const void *)sceneType;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_sceneType;
+ (const void *)massSendType;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_massSendType;
+ (void)__wcdb_column_constraint_6:(void *)a0;
+ (void)__wcdb_index_7:(void *)a0;
+ (void)__wcdb_index_8:(void *)a0;
+ (void)__wcdb_index_9:(void *)a0;
+ (void)__wcdb_index_10:(void *)a0;

- (id)initWithMsg:(id)a0;

@end

@class NSString, TemplateMsgFoldInfos;

@interface TemplateMsgFoldDBTable : MMObject <WCTTableCoding>

@property (nonatomic) unsigned int msgLocalId;
@property (nonatomic) unsigned int foldedMsgLocalId;
@property (retain, nonatomic) TemplateMsgFoldInfos *foldInfos;
@property (copy, nonatomic) NSString *clusterId;
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
+ (const void *)msgLocalId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_msgLocalId;
+ (const void *)foldedMsgLocalId;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_foldedMsgLocalId;
+ (const void *)foldInfos;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_foldInfos;
+ (const void *)clusterId;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_clusterId;
+ (void)__wcdb_column_constraint_4:(void *)a0;

- (void).cxx_destruct;

@end

@class NSString;

@interface SolitaireFoldInfo : NSObject

@property (retain, nonatomic) NSString *nsChatName;
@property (nonatomic) unsigned int localId;
@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) NSString *nsFrontContent;
@property (retain, nonatomic) NSString *nsBehindContent;
@property (nonatomic) unsigned int showCount;
@property (nonatomic) unsigned int hiddenCount;
@property (nonatomic) long long firstSvrId;
@property (retain, nonatomic) NSString *nsIdentifier;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)nsChatName;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_nsChatName;
+ (const void *)localId;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_localId;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_createTime;
+ (const void *)nsFrontContent;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_nsFrontContent;
+ (const void *)nsBehindContent;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_nsBehindContent;
+ (const void *)showCount;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_showCount;
+ (const void *)hiddenCount;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_hiddenCount;
+ (const void *)firstSvrId;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_firstSvrId;
+ (const void *)nsIdentifier;
+ (const void *)__wcdb_synthesize_8:(void *)a0;
+ (id)swift_nsIdentifier;
+ (void)__wcdb_table_constraint_9:(void *)a0;
+ (void)__wcdb_table_constraint_10:(void *)a0;
+ (void)__wcdb_table_constraint_11:(void *)a0;

- (id)getFoldContent;
- (id)getPureText;
- (id)description;
- (void).cxx_destruct;

@end

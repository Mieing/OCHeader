@class NSString;

@interface MsgSolitaire : NSObject

@property (retain, nonatomic) NSString *nsChatName;
@property (nonatomic) unsigned int msgLocalId;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)nsChatName;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_nsChatName;
+ (const void *)msgLocalId;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_msgLocalId;
+ (void)__wcdb_table_constraint_2:(void *)a0;
+ (void)__wcdb_table_constraint_3:(void *)a0;

- (id)description;
- (void).cxx_destruct;

@end

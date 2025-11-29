@class NSString;

@interface WCDBMagicAdPushMsgInfo : NSObject

@property (retain, nonatomic) NSString *msgId;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned char opcode;
@property (nonatomic) unsigned long long message_aid;
@property (nonatomic) unsigned long long message_slotid;
@property (nonatomic) unsigned long long message_op_time;
@property (retain, nonatomic) NSString *message_traceid;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)msgId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_msgId;
+ (const void *)timestamp;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_timestamp;
+ (const void *)opcode;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_opcode;
+ (const void *)message_aid;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_message_aid;
+ (const void *)message_slotid;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_message_slotid;
+ (const void *)message_op_time;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_message_op_time;
+ (const void *)message_traceid;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_message_traceid;
+ (void)__wcdb_column_constraint_7:(void *)a0;
+ (void)__wcdb_index_8:(void *)a0;

- (id)description;
- (void).cxx_destruct;

@end

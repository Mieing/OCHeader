@class NSString;

@interface DBContactSendMsgTicket : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *sendMsgTicket;
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
+ (const void *)__wcdb_synthesize_26:(void *)a0;
+ (id)swift_userName;
+ (const void *)sendMsgTicket;
+ (const void *)__wcdb_synthesize_27:(void *)a0;
+ (id)swift_sendMsgTicket;
+ (void)__wcdb_column_constraint_28:(void *)a0;
+ (void)__wcdb_column_constraint_29:(void *)a0;

- (void).cxx_destruct;

@end

@class NSString;

@interface MMSessionLastMsgInfo : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *username;
@property (nonatomic) long long lastMsgServerId;
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
+ (const void *)username;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_username;
+ (const void *)lastMsgServerId;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_lastMsgServerId;
+ (void)__wcdb_column_constraint_2:(void *)a0;

- (void).cxx_destruct;

@end

@class NSData, NSString;

@interface OpLog : NSObject <WCTTableCoding>

@property (nonatomic) unsigned int oplogID;
@property (nonatomic) unsigned int oplogCmdID;
@property (retain, nonatomic) NSData *oplogBuffer;
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
+ (const void *)oplogID;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_oplogID;
+ (const void *)oplogCmdID;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_oplogCmdID;
+ (const void *)oplogBuffer;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_oplogBuffer;
+ (void)__wcdb_column_constraint_3:(void *)a0;

- (void).cxx_destruct;

@end

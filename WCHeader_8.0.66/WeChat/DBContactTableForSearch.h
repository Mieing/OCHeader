@class NSString, NSData;

@interface DBContactTableForSearch : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSData *dbContactRemark;
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
+ (const void *)__wcdb_synthesize_24:(void *)a0;
+ (id)swift_userName;
+ (const void *)dbContactRemark;
+ (const void *)__wcdb_synthesize_25:(void *)a0;
+ (id)swift_dbContactRemark;

- (void).cxx_destruct;

@end

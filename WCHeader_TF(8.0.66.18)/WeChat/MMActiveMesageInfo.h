@class NSString;

@interface MMActiveMesageInfo : NSObject <WCTTableCoding>

@property (copy, nonatomic) NSString *sessionName;
@property (nonatomic) unsigned int localID;
@property (nonatomic) unsigned long long infoType;
@property (nonatomic) unsigned int activeTime;
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
+ (const void *)sessionName;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_sessionName;
+ (const void *)localID;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_localID;
+ (const void *)infoType;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_infoType;
+ (const void *)activeTime;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_activeTime;
+ (void)__wcdb_index_4:(void *)a0;

- (void).cxx_destruct;

@end

@class NSString;

@interface WCBackupAnalyseInfo : NSObject <WCTTableCoding>

@property (nonatomic) unsigned long long infoType;
@property (nonatomic) double occurTime;
@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic) NSString *infoString;
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
+ (const void *)infoType;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_infoType;
+ (const void *)occurTime;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_occurTime;
+ (const void *)deviceName;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_deviceName;
+ (const void *)infoString;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_infoString;

- (void).cxx_destruct;

@end

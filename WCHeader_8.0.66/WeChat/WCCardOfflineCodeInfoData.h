@class NSString, NSData;

@interface WCCardOfflineCodeInfoData : MMObject <WCTTableCoding>

@property (retain, nonatomic) NSString *cardId;
@property (retain, nonatomic) NSString *qrCodeId;
@property (retain, nonatomic) NSData *code;
@property (nonatomic) unsigned int status;
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
+ (const void *)cardId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_cardId;
+ (const void *)qrCodeId;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_qrCodeId;
+ (const void *)code;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_code;
+ (const void *)status;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_status;

- (void).cxx_destruct;

@end

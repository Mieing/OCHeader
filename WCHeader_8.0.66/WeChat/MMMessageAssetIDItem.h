@class NSString;

@interface MMMessageAssetIDItem : NSObject <WCTTableCoding>

@property (nonatomic) long long messageSvrID;
@property (retain, nonatomic) NSString *chatName;
@property (retain, nonatomic) NSString *assetID;
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
+ (const void *)messageSvrID;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_messageSvrID;
+ (const void *)chatName;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_chatName;
+ (const void *)assetID;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_assetID;
+ (void)__wcdb_column_constraint_3:(void *)a0;

- (void).cxx_destruct;

@end

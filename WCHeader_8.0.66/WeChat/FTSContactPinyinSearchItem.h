@class NSString;

@interface FTSContactPinyinSearchItem : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *reservedText;
@property (retain, nonatomic) NSString *pinyinContent;
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
+ (const void *)pinyinContent;
+ (const void *)__wcdb_synthesize_95:(void *)a0;
+ (id)swift_pinyinContent;
+ (const void *)reservedText;
+ (const void *)__wcdb_synthesize_96:(void *)a0;
+ (id)swift_reservedText;
+ (void)__wcdb_virtual_table_97:(void *)a0;
+ (void)__wcdb_virtual_table_98:(void *)a0;

- (void).cxx_destruct;

@end

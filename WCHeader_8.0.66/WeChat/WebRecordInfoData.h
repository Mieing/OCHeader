@class NSString;

@interface WebRecordInfoData : MMObject <WCTTableCoding>

@property (retain, nonatomic) NSString *link;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *iconurl;
@property (retain, nonatomic) NSString *imgurl;
@property (nonatomic) unsigned int visittime;
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
+ (const void *)link;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_link;
+ (const void *)name;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_name;
+ (const void *)title;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_title;
+ (const void *)iconurl;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_iconurl;
+ (const void *)imgurl;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_imgurl;
+ (const void *)visittime;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_visittime;
+ (void)__wcdb_index_6:(void *)a0;
+ (void)__wcdb_index_7:(void *)a0;

- (void).cxx_destruct;

@end

@class NSString, NSMutableArray;

@interface CEmoticonIPSetInfo : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *setKey;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *panelUrl;
@property (retain, nonatomic) NSMutableArray *pageWarpList;
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
+ (const void *)setKey;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_setKey;
+ (const void *)title;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_title;
+ (const void *)desc;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_desc;
+ (const void *)iconUrl;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_iconUrl;
+ (const void *)panelUrl;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_panelUrl;
+ (void)__wcdb_column_constraint_5:(void *)a0;
+ (void)__wcdb_index_6:(void *)a0;
+ (void)additionalObjectRelationalMapping:(void *)a0;

- (id)init;
- (void).cxx_destruct;

@end

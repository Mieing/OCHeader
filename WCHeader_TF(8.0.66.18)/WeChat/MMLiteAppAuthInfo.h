@class NSString;

@interface MMLiteAppAuthInfo : MMObject <WCTTableCoding, NSCopying>

@property (retain, nonatomic) NSString *host;
@property (retain, nonatomic) NSString *param;
@property (retain, nonatomic) NSString *paramMap;
@property (nonatomic) long long updateTime;
@property (retain, nonatomic) NSString *headerMap;
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
+ (const void *)host;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_host;
+ (const void *)param;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_param;
+ (const void *)paramMap;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_paramMap;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_updateTime;
+ (const void *)headerMap;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_headerMap;
+ (void)__wcdb_column_constraint_5:(void *)a0;
+ (id)createItem:(id)a0 param:(id)a1 paramDic:(id)a2 headerDic:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)getParamDic;
- (id)getHeaderDic;
- (void).cxx_destruct;

@end

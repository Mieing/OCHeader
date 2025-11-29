@class NSString;

@interface KFContact : CBaseContact <WCTTableCoding>

@property (retain, nonatomic) NSString *kfOpenId;
@property (nonatomic) unsigned int kfType;
@property (retain, nonatomic) NSString *brand;
@property (retain, nonatomic) NSString *headImageUrl;
@property (retain, nonatomic) NSString *nickName;
@property (nonatomic) unsigned int updateTime;
@property (nonatomic) BOOL headImgUpdateFlag;
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
+ (const void *)kfOpenId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_kfOpenId;
+ (const void *)kfType;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_kfType;
+ (const void *)brand;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_brand;
+ (const void *)headImageUrl;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_headImageUrl;
+ (const void *)nickName;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_nickName;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_updateTime;
+ (const void *)headImgUpdateFlag;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_headImgUpdateFlag;
+ (void)__wcdb_column_constraint_7:(void *)a0;

- (void).cxx_destruct;

@end

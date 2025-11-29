@class NSString;

@interface WCBgImgLiked : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *bgimg;
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
+ (const void *)username;
+ (const void *)__wcdb_synthesize_77:(void *)a0;
+ (id)swift_username;
+ (const void *)bgimg;
+ (const void *)__wcdb_synthesize_78:(void *)a0;
+ (id)swift_bgimg;
+ (void)__wcdb_column_constraint_79:(void *)a0;
+ (void)__wcdb_column_constraint_80:(void *)a0;

- (void).cxx_destruct;

@end

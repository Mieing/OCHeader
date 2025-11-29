@class NSString;

@interface DBMessageBizExt : NSObject <WCTTableCoding>

@property (nonatomic) unsigned int msgExtColInt1;
@property (nonatomic) unsigned int msgExtColInt2;
@property (retain, nonatomic) NSString *msgExtColString1;
@property (retain, nonatomic) NSString *msgExtColString2;
@property (retain, nonatomic) NSString *chatUsername;
@property (nonatomic) unsigned int msgLocalId;
@property (nonatomic) unsigned int msgType;
@property (nonatomic) unsigned int msgInnerType;
@property (retain, nonatomic) NSString *bizId;
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
+ (const void *)chatUsername;
+ (const void *)__wcdb_synthesize_88:(void *)a0;
+ (id)swift_chatUsername;
+ (const void *)msgLocalId;
+ (const void *)__wcdb_synthesize_89:(void *)a0;
+ (id)swift_msgLocalId;
+ (const void *)msgType;
+ (const void *)__wcdb_synthesize_90:(void *)a0;
+ (id)swift_msgType;
+ (const void *)msgInnerType;
+ (const void *)__wcdb_synthesize_91:(void *)a0;
+ (id)swift_msgInnerType;
+ (const void *)bizId;
+ (const void *)__wcdb_synthesize_92:(void *)a0;
+ (id)swift_bizId;
+ (const void *)msgExtColInt1;
+ (const void *)__wcdb_synthesize_93:(void *)a0;
+ (id)swift_msgExtColInt1;
+ (const void *)msgExtColInt2;
+ (const void *)__wcdb_synthesize_94:(void *)a0;
+ (id)swift_msgExtColInt2;
+ (const void *)msgExtColString1;
+ (const void *)__wcdb_synthesize_95:(void *)a0;
+ (id)swift_msgExtColString1;
+ (const void *)msgExtColString2;
+ (const void *)__wcdb_synthesize_96:(void *)a0;
+ (id)swift_msgExtColString2;

- (void).cxx_destruct;

@end

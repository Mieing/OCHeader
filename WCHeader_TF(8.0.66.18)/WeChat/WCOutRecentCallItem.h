@class NSString;

@interface WCOutRecentCallItem : MMObject <WCTTableCoding, NSCopying>

@property (nonatomic) unsigned int localID;
@property (retain, nonatomic) NSString *countryCode;
@property (retain, nonatomic) NSString *phoneNum;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int startTime;
@property (nonatomic) unsigned int endTime;
@property (nonatomic) unsigned int statusCode;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *phoneTag;
@property (readonly, nonatomic) NSString *statusWording;
@property (readonly, nonatomic) NSString *fullPhoneNum;
@property (readonly, nonatomic) NSString *fullPhoneNumInLog;
@property (retain, nonatomic) NSString *checkCountryCode;
@property (retain, nonatomic) NSString *inviteRespFullPhoneNum;
@property (nonatomic) unsigned int dialScene;
@property (nonatomic) unsigned int countyrCodeType;
@property (nonatomic) unsigned int callFlag;
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
+ (const void *)localID;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_localID;
+ (const void *)countryCode;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_countryCode;
+ (const void *)phoneNum;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_phoneNum;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_createTime;
+ (const void *)startTime;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_startTime;
+ (const void *)endTime;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_endTime;
+ (const void *)statusCode;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_statusCode;
+ (void)__wcdb_column_constraint_7:(void *)a0;

@end

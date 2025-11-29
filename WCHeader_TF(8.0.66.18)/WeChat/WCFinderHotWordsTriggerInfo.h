@class NSString, NSData;

@interface WCFinderHotWordsTriggerInfo : NSObject <WCTColumnCoding>

@property (retain, nonatomic) NSString *keyword;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long endTime;
@property (nonatomic) int jumpDest;
@property (nonatomic) long long jumpScene;
@property (retain, nonatomic) NSData *bypassInfo;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)keyword;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_keyword;
+ (const void *)startTime;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_startTime;
+ (const void *)endTime;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_endTime;
+ (const void *)jumpDest;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_jumpDest;
+ (const void *)jumpScene;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_jumpScene;
+ (const void *)bypassInfo;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_bypassInfo;
+ (void)__wcdb_column_constraint_6:(void *)a0;
+ (id)fromPBMsgConfig:(id)a0;

- (id)description;
- (void).cxx_destruct;

@end

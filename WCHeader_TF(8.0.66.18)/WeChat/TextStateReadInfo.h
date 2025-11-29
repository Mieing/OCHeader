@class NSString;

@interface TextStateReadInfo : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *textStateId;
@property (nonatomic) unsigned int expiredTime;
@property (retain, nonatomic) NSString *topicId;
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
+ (const void *)textStateId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_textStateId;
+ (const void *)expiredTime;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_expiredTime;
+ (const void *)topicId;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_topicId;
+ (void)__wcdb_column_constraint_3:(void *)a0;

- (void).cxx_destruct;

@end

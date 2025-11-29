@class NSString;

@interface WCFinderCommentMentionContact : NSObject <WCTTableCoding>

@property (copy, nonatomic) NSString *username;
@property (nonatomic) unsigned long long mentionedTime;
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
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_username;
+ (const void *)mentionedTime;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_mentionedTime;
+ (void)__wcdb_column_constraint_2:(void *)a0;
+ (void)__wcdb_index_3:(void *)a0;

- (void).cxx_destruct;

@end

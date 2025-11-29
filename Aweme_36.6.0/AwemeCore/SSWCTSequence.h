@class NSString;

@interface SSWCTSequence : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) int seq;

+ (id)__wcdbtyper;
+ (const void *)objectRelationalMapping;
+ (const void *)ss_name;
+ (const void *)ss_seq;
+ (id)allBridgeProperties;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_ss_name;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_ss_seq;
+ (const void *)allProperties;
+ (id)tableName;

- (void).cxx_destruct;

@end

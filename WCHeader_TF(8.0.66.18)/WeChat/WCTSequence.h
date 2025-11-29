@class NSString;

@interface WCTSequence : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) int seq;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)name;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_name;
+ (const void *)seq;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_seq;
+ (id)tableName;

- (void).cxx_destruct;

@end

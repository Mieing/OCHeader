@class NSString;

@interface WCDBSequence : NSObject

@property (class, readonly, nonatomic) NSString *tableName;

@property (retain, nonatomic) NSString *name;
@property (nonatomic) long long seq;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)seq;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_seq;
+ (const void *)name;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_name;

- (void).cxx_destruct;

@end

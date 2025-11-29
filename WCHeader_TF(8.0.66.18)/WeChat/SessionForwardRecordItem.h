@class NSString;

@interface SessionForwardRecordItem : NSObject

@property (retain, nonatomic) NSString *sessionItemUsername;
@property (nonatomic) unsigned int forwardTime;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)sessionItemUsername;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_sessionItemUsername;
+ (const void *)forwardTime;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_forwardTime;
+ (void)__wcdb_index_7:(void *)a0;
+ (void)__wcdb_index_8:(void *)a0;

- (void).cxx_destruct;

@end

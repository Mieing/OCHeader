@class NSString;

@interface SessionForwardRecord : NSObject

@property (retain, nonatomic) NSString *sessionUsername;
@property (nonatomic) unsigned int forwardTime;
@property (nonatomic) BOOL isHidden;
@property (nonatomic) BOOL isMostUsed;
@property (nonatomic) unsigned long long scene;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)sessionUsername;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_sessionUsername;
+ (const void *)forwardTime;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_forwardTime;
+ (const void *)isHidden;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_isHidden;
+ (const void *)scene;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_scene;
+ (void)__wcdb_column_constraint_4:(void *)a0;

- (void).cxx_destruct;

@end

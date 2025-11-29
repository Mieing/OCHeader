@class NSString;

@interface FTS5IntelligentSecureRank : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *secureRankStr;
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
+ (const void *)secureRankStr;
+ (const void *)__wcdb_synthesize_171:(void *)a0;
+ (id)swift_secureRankStr;
+ (void)__wcdb_index_172:(void *)a0;

- (void).cxx_destruct;

@end

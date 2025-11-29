@class NSString;

@interface GameWebVideoCacheInfo : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *cacheIdentify;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned int updateTime;
@property (retain, nonatomic) NSString *contentType;
@property (nonatomic) unsigned long long contentTotalLength;
@property (retain, nonatomic) NSString *acceptRanges;
@property (nonatomic) BOOL isRedDotPreload;
@property (nonatomic) unsigned int failedCount;
@property (retain, nonatomic) NSString *resourceUrl;
@property (nonatomic) BOOL isCdnPreload;
@property (nonatomic) BOOL isCdnPreloadSuccess;
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
+ (const void *)cacheIdentify;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_cacheIdentify;
+ (const void *)url;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_url;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_updateTime;
+ (const void *)contentType;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_contentType;
+ (const void *)contentTotalLength;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_contentTotalLength;
+ (const void *)acceptRanges;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_acceptRanges;
+ (const void *)isRedDotPreload;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_isRedDotPreload;
+ (const void *)failedCount;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_failedCount;
+ (const void *)resourceUrl;
+ (const void *)__wcdb_synthesize_8:(void *)a0;
+ (id)swift_resourceUrl;
+ (const void *)isCdnPreload;
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (id)swift_isCdnPreload;
+ (const void *)isCdnPreloadSuccess;
+ (const void *)__wcdb_synthesize_10:(void *)a0;
+ (id)swift_isCdnPreloadSuccess;
+ (void)__wcdb_column_constraint_11:(void *)a0;

- (void).cxx_destruct;

@end

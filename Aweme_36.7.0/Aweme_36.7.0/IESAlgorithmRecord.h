@class NSString, CKCacheInfo_OC, NSDictionary;

@interface IESAlgorithmRecord : NSObject

@property (class, readonly, copy, nonatomic) NSString *tableName;
@property (class, readonly, copy, nonatomic) NSString *columnModelName;
@property (class, readonly, copy, nonatomic) NSString *columnVersion;
@property (class, readonly, copy, nonatomic) NSString *columnMD5;
@property (class, readonly, copy, nonatomic) NSString *columnFileSize;
@property (class, readonly, copy, nonatomic) NSString *columnSizeType;
@property (class, readonly, copy, nonatomic) NSString *columnSource;
@property (class, readonly, copy, nonatomic) NSString *columnBizSpace;
@property (class, readonly, copy, nonatomic) NSString *columnUri;

@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *modelMD5;
@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSString *uri;
@property (nonatomic) unsigned long long size;
@property (retain, nonatomic) CKCacheInfo_OC *ckCacheInfo;
@property (copy, nonatomic) NSDictionary *queryResultSet;
@property (nonatomic) double lastUseTime;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) long long sizeType;
@property (readonly, nonatomic) long long source;

- (id)initWithName:(id)a0 version:(id)a1 modelMD5:(id)a2 filePath:(id)a3 size:(unsigned long long)a4 sizeType:(long long)a5;
- (id)initWithCKCacheInfo:(id)a0;
- (void)updateLastUseTime:(double)a0;
- (id)CKCacheInfo;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end

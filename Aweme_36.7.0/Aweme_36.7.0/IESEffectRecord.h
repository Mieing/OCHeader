@class NSString, NSDictionary, CKCacheInfo_OC;

@interface IESEffectRecord : NSObject

@property (class, readonly, copy, nonatomic) NSString *tableName;
@property (class, readonly, copy, nonatomic) NSString *columnEffectMD5;
@property (class, readonly, copy, nonatomic) NSString *columnEffectId;
@property (class, readonly, copy, nonatomic) NSString *columnPanel;
@property (class, readonly, copy, nonatomic) NSString *columnFileSize;
@property (class, readonly, copy, nonatomic) NSString *columnUri;
@property (class, readonly, copy, nonatomic) NSString *columnUseCount;
@property (class, readonly, copy, nonatomic) NSString *columnRefCount;
@property (class, readonly, copy, nonatomic) NSString *columnLastUseTime;
@property (class, readonly, copy, nonatomic) NSString *columnBizSpace;
@property (class, readonly, copy, nonatomic) NSString *columnSource;
@property (class, readonly, copy, nonatomic) NSString *columnEffectModel;
@property (class, readonly, copy, nonatomic) NSString *columnExtra;

@property (copy, nonatomic) NSString *effectMD5;
@property (copy, nonatomic) NSString *effectIdentifier;
@property (nonatomic) unsigned long long size;
@property (copy, nonatomic) NSString *panel;
@property (nonatomic) double lastUseTime;
@property (copy, nonatomic) NSDictionary *queryResultSet;
@property (retain, nonatomic) CKCacheInfo_OC *ckCacheInfo;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *filePath;
@property (readonly, nonatomic) long long source;

- (double)getTimeStampByLastUseTime;
- (id)initWithEffectMD5:(id)a0 effectIdentifier:(id)a1 size:(unsigned long long)a2;
- (id)initWithCKCacheInfo:(id)a0;
- (void)updatePanelName:(id)a0;
- (void)updateLastUseTime:(double)a0;
- (id)CKCacheInfo;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;

@end

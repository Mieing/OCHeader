@class NSString;

@interface DataReportNewUBACacheModel : NSObject <PBCoding, NSCopying, WCTTableCoding>

@property (nonatomic) unsigned long long cacheTime;
@property (retain, nonatomic) NSString *reportStr;
@property (nonatomic) BOOL isKeyView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;

+ (void)PBArrayAdd_cacheTime;
+ (void)PBArrayAdd_reportStr;
+ (void)PBArrayAdd_isKeyView;
+ (void)initialize;
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)cacheTime;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_cacheTime;
+ (const void *)reportStr;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_reportStr;
+ (const void *)isKeyView;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_isKeyView;

- (id)getPBPropertyTable;
- (id)initWithTime:(unsigned long long)a0 withStr:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)toString;
- (void).cxx_destruct;

@end
